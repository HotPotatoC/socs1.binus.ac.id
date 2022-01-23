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
  char id[21];
  char name[101];
  int age;
} student;

int main() {
  int n;
  scanf("%d", &n);
  student students[n];
  for (int i = 0; i < n; i++) {
    scanf("%s", students[i].id);
    getchar();
    scanf("%[^\n]", students[i].name);
    scanf("%d", &students[i].age);
  }

  int qn;
  scanf("%d", &qn);
  for (int i = 0; i < qn; i++) {
    int q;
    scanf("%d", &q);

    printf("Query #%d:\n", i + 1);
    printf("ID: %s\n", students[q - 1].id);
    printf("Name: %s\n", students[q - 1].name);
    printf("Age: %d\n", students[q - 1].age);
  }

  return 0;
}