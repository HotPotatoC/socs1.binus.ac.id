#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef signed long long int int64;
typedef unsigned long long int uint64;

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
    int mmr[n];
    for (int i = 0; i < n; i++) {
      scanf("%d", &mmr[i]);
    }

    int temp[n];
    sort(mmr, temp, 0, n - 1); // Jaga jaga aja :)

    int f;
    scanf("%d", &f);

    int mmr_idx = -1;
    int mmr1 = -1, mmr2 = -1;
    for (int i = 0; i < n; i++) {
      if (mmr[i] == f)
        mmr_idx = i;
    }

    if (mmr_idx == -1)
      printf("CASE #%d: -1 -1\n", t + 1);
    else if (mmr_idx == n - 1)
      printf("CASE #%d: %d %d\n", t + 1, mmr[mmr_idx - 1], mmr[mmr_idx]);
    else if (mmr_idx == 0)
      printf("CASE #%d: %d %d\n", t + 1, mmr[0], mmr[1]);
    else
      printf("CASE #%d: %d %d\n", t + 1, mmr[mmr_idx], mmr[mmr_idx + 1]);
  }

  return 0;
}