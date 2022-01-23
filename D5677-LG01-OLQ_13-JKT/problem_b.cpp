#include <ctype.h>
#include <limits.h>
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

void sort(int *arr, int *temp, int left, int right) {
  if (left < right) {
    int mid = (left + right) / 2;
    sort(arr, temp, left, mid);
    sort(arr, temp, mid + 1, right);
    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right) {
      if (arr[i] < arr[j]) {
        temp[k++] = arr[i++];
      } else {
        temp[k++] = arr[j++];
      }
    }
    while (i <= mid) {
      temp[k++] = arr[i++];
    }
    while (j <= right) {
      temp[k++] = arr[j++];
    }
    for (i = left; i <= right; i++) {
      arr[i] = temp[i];
    }
  }
}

int main() {
  int tc;
  scanf("%d", &tc);
  for (int t = 0; t < tc; t++) {
    int n;
    scanf("%d", &n);
    int years[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &years[i]);

    int min = INT_MAX;

    int temp[n];
    sort(years, temp, 0, n - 1);

    for (int i = 1; i < n; i++) {
      int res = years[i] - years[i - 1];
      min = MIN(min, res);
    }

    printf("Case #%d: %d\n", t + 1, min);
  }

  return 0;
}