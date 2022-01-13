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

void merge_sort(uint64 *arr, uint64 *temp, int left, int right) {
  if (left < right) {
    int mid = (left + right) / 2;
    merge_sort(arr, temp, left, mid);
    merge_sort(arr, temp, mid + 1, right);
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
  int n;
  scanf("%d", &n);
  uint64 x[n];
  for (int i = 0; i < n; i++)
    scanf("%lld", &x[i]);

  uint64 temp[n];
  merge_sort(x, temp, 0, n - 1);

  uint64 y;
  scanf("%lld", &y);

  int counter = 0;
  for (int i = 0; i < n; i++) {
    if (y >= x[i]) {
      counter++;
    } else {
      break;
    }
    y -= x[i];
  }

  printf("%d\n", counter);

  return 0;
}