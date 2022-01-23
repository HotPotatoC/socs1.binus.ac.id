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

int main() {
  FILE *f = fopen("testdata.in", "r");
  if (f == NULL)
    return 1;

  int min_word;
  fscanf(f, "%d", &min_word);

  int word_count = 0;
  int page = 1;

  unsigned int pages[10];

  char s[51];
  while (fscanf(f, "%s", s) != EOF) {
    word_count++;

    if (strcmp(s, "#") == 0) {
      pages[page - 1] = word_count - 1;
      page++;
      word_count = 0;
    }
  }

  bool flag = false;
  for (int i = 0; i < page - 1; i++) {
    if (pages[i] < min_word) {
      printf("page %d: %d word(s)\n", i + 1, pages[i]);
      flag = true;
    }
  }

  if (!flag) {
    printf("The essay is correct\n");
  }

  fclose(f);

  return 0;
}