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

typedef struct plant {
  char name[41];
  int r;
} plant_t;

void sort(plant_t *arr, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (strcmp(arr[j].name, arr[j + 1].name) > 0) {
        plant_t tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}

int main() {
  FILE *f = fopen("testdata.in", "r");
  if (f == NULL) {
    return 1;
  }
  int n;
  fscanf(f, "%d\n", &n);
  plant_t *arr = (plant_t *)malloc(sizeof(plant) * n);
  for (int i = 0; i < n; i++)
    fscanf(f, " %d#%[^\n]", &arr[i].r, arr[i].name);

  sort(arr, n);

  for (int i = 0; i < n; i++)
    printf("%d %s\n", arr[i].r, arr[i].name);

  return 0;
}