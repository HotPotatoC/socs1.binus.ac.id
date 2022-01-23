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

typedef struct {
  char name[11];
  int grade;
} record;

void sort(record *records, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (records[j].grade < records[j + 1].grade) {
        record t = records[j];
        records[j] = records[j + 1];
        records[j + 1] = t;
      } else if (records[j].grade == records[j + 1].grade &&
                 strcmp(records[j].name, records[j + 1].name) > 0) {
        record t = records[j];
        records[j] = records[j + 1];
        records[j + 1] = t;
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
    record records[n];
    for (int i = 0; i < n; i++)
      scanf(" %[^#]#%d", records[i].name, &records[i].grade);

    char search[11];
    scanf("%s", search);

    sort(records, n);

    int rank;
    for (int i = 0; i < n; i++) {
      if (strcmp(records[i].name, search) == 0)
        rank = i + 1;
    }

    printf("Case #%d: %d\n", t+1, rank);
  }

  return 0;
}