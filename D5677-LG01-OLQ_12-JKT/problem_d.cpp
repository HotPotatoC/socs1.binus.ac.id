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

typedef struct subject {
  char name[11];
  int deadline;
} subject_t;

void sort_by_deadline(subject_t *arr, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j].deadline > arr[j + 1].deadline) {
        subject_t tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}

void sort_by_name(subject_t *arr, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j].deadline == arr[j + 1].deadline &&
          strcmp(arr[j].name, arr[j + 1].name) > 0) {
        subject_t tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}

int main() {
  int n;
  scanf("%d", &n);
  subject_t subjects[n];
  for (int i = 0; i < n; i++)
    scanf("%s %d", subjects[i].name, &subjects[i].deadline);

  sort_by_deadline(subjects, n);
  sort_by_name(subjects, n);

  for (int i = 0; i < n; i++)
    printf("%s\n", subjects[i].name);

  return 0;
}