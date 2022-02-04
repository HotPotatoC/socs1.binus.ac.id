#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef signed long long int int64;
typedef unsigned long long int uint64;

// Sort function using the merge sort algorithm
void sort(int arr[], int left, int right) {
  int temp[right + 1];
  if (left < right) {
    int mid = (left + right) / 2;
    sort(arr, left, mid);
    sort(arr, mid + 1, right);
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

  // Read the number triangle segments
  scanf("%d", &n);

  // Declare a triangle segment lengths array of size n
  int segment_lengths[n];

  // Read the triangle segment lengths
  for (int i = 0; i < n; i++)
    scanf("%d", &segment_lengths[i]);

  // Sort the triangle segment lengths, to ensure that the segments are
  // in ascending order
  sort(segment_lengths, 0, n - 1);

  // if n < 3, then a non-degenerate triangle cannot be formed
  if (n < 3) {
    printf("NO\n");
    return 0;
  }

  // Declare a bool variable to store whether a non-degenerate triangle
  // can be formed
  bool is_possible = false;
  for (int i = 0; i < n - 2; i++) {
    // Check if the current triangle segment length is greater than the
    // sum of the next two triangle segment lengths
    if (segment_lengths[i] + segment_lengths[i + 1] > segment_lengths[i + 2]) {
      // If so, then a non-degenerate triangle can be formed
      is_possible = true;
      break;
    }
  }

  // Print the result
  if (is_possible) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  return 0;
}