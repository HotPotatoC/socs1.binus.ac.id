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

typedef struct temperature {
  char city[1001];
  double temperature;
  char unit;
} temperature_t;

void sort(temperature_t *arr, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      double temp1 = arr[j].temperature;
      double temp2 = arr[j + 1].temperature;
      if (arr[j].unit == 'F')
        temp1 = (arr[j].temperature - 32.0) * 5.0 / 9.0;
      if (arr[j + 1].unit == 'F')
        temp2 = (arr[j + 1].temperature - 32.0) * 5.0 / 9.0;

      if (temp1 != temp2 && temp1 > temp2) {
        temperature_t tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      } else if (temp1 == temp2 &&
                 strcmp(arr[j].city, arr[j + 1].city) > 0) {
        temperature_t tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}

unsigned int count_lines(FILE *f) {
  unsigned int lines = 0;
  for (char c = getc(f); c != EOF; c = getc(f))
    if (c == '\n')
      lines++;
  return lines;
}

int main() {
  FILE *f = fopen("testdata.in", "r");
  if (f == NULL) {
    return 1;
  }

  int n = count_lines(f);

  rewind(f);

  temperature_t *arr = (temperature_t *)malloc(sizeof(temperature_t) * n);
  int i = 0;
  while (fscanf(f, " %[^#]#%lf#%c\n", arr[i].city, &arr[i].temperature,
                &arr[i].unit) != EOF) {
    i++;
  }

  sort(arr, n);

  for (int i = 0; i < n; i++)
    printf("%s is %.2lf%c\n", arr[i].city, arr[i].temperature, arr[i].unit);

  return 0;
}