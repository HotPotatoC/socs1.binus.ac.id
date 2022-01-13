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

void sort(int *arr, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j + 1] > arr[j]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
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
    int arr[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &arr[i]);

    sort(arr, n);

    int max = 0;
    int mid = n / 2;
    for (int i = 0; i < mid - 1; i++) {
      int s = arr[i + 1] - arr[i];
      if (s < 0)
        s *= -1;
      if (max < s)
        max = s;
    }

    for (int i = mid; i < n - 1; i++) {
      int s = arr[i + 1] - arr[i];
      if (s < 0)
        s *= -1;
      if (max < s)
        max = s;
    }

    printf("Case #%d: %d\n", t + 1, max);
  }

  return 0;
}