#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef signed long long int int64;
typedef unsigned long long int uint64;

typedef struct {
  char value[101];
} name;

void sort(name *arr, name *temp, int left, int right) {
  if (left < right) {
    int mid = (left + right) / 2;
    sort(arr, temp, left, mid);
    sort(arr, temp, mid + 1, right);
    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right) {
      if (strcmp(arr[i].value, arr[j].value) < 0) {
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
    int n, query;
    scanf("%d %d", &n, &query);

    name names[n];
    name temp[n];

    for (int i = 0; i < n; i++) {
      scanf("%s", names[i].value);
    }

    sort(names, temp, 0, n - 1);

    printf("Case #%d: %s\n", t + 1, names[query - 1].value);
  }

  return 0;
}