#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define lld long long int
#define uint64 unsigned long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n) % 2 != 0)
#define IS_EVEN(n) ((n) % 2 == 0)
#define INF 1e9

typedef struct nn {
  char name[51];
  int number;
} nn_t;

void sort(nn_t *arr, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j].number != arr[j + 1].number &&
          arr[j].number < arr[j + 1].number) {
        nn_t tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      } else if (arr[j].number == arr[j + 1].number &&
                 strcmp(arr[j].name, arr[j + 1].name) > 0) {
        nn_t tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}

int main() {
  int tc;
  scanf("%d", &tc);
  for (int t = 0; t < tc; t++) {
    int n;
    scanf("%d", &n);

    nn_t *arr = (nn_t *)malloc(sizeof(nn_t) * n);
    for (int i = 0; i < n; i++)
      scanf(" %[^#]#%d", arr[i].name, &arr[i].number);

    sort(arr, n);
    printf("Case #%d:\n", t + 1);
    for (int i = 0; i < n; i++) {
      printf("%s - %d\n", arr[i].name, arr[i].number);
    }
  }

  return 0;
}