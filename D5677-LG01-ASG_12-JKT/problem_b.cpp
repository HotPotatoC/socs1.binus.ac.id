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

typedef struct {
  char nim[11];
  char name[21];
} student;

void sort(student *students, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (strcmp(students[j].nim, students[j + 1].nim) > 0) {
        student temp = students[j];
        students[j] = students[j + 1];
        students[j + 1] = temp;
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
  fscanf(f, "%d", &n);
  student students[n];
  for (int i = 0; i < n; i++)
    fscanf(f, "%s %s", students[i].nim, students[i].name);

  sort(students, n);

  for (int i = 0; i < n; i++)
    printf("%s %s\n", students[i].nim, students[i].name);

  return 0;
}