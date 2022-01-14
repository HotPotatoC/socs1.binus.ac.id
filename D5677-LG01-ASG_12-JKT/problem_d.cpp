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
  char s[201];
} word;

void swapchar(char *a, char *b) {
  char temp = *a;
  *a = *b;
  *b = temp;
}

void lexico_sort_lr(word arr[], int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols - 1; j++) {
      for (int k = 0; k < cols - j - 1; k++) {
        if (arr[i].s[k] > arr[i].s[k + 1]) {
          swapchar(&arr[i].s[k], &arr[i].s[k + 1]);
        }
      }
    }
  }
}

void swapword(word *a, word *b) {
  word temp = *a;
  *a = *b;
  *b = temp;
}

void lexico_sort_tb(word arr[], int rows) {
  for (int i = 0; i < rows - 1; i++) {
    for (int j = 0; j < rows - i - 1; j++) {
      if (arr[j].s[0] < arr[j + 1].s[0]) {
        swapword(&arr[j], &arr[j + 1]);
      }
    }
  }

  for (int i = 0; i < rows - 1; i++) {
    for (int j = 0; j < rows - i - 1; j++) {
      if (strcmp(arr[j].s, arr[j + 1].s) < 0) {
        swapword(&arr[j], &arr[j + 1]);
      }
    }
  }
}

int main() {
  int rows, cols;
  scanf("%d %d", &rows, &cols);
  word letters[rows];
  for (int i = 0; i < rows; i++) {
    scanf("%s", letters[i].s);
  }

  lexico_sort_lr(letters, rows, cols);
  lexico_sort_tb(letters, rows);

  for (int i = 0; i < rows; i++)
    printf("%s\n", letters[i].s);

  return 0;
}