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


bool valid_pos(int x, int y, int i) { return x % y == 0 && x != 1 || i == 0; }

int main() {
  int n;
  scanf("%d", &n);
  int columns, pos;

  for (int i = 0; i < n; i++) {
    int columns = pow(2, n - i);
    for (int j = 1; j < columns; j++) {
      int pos = pow(2, i);
      if (valid_pos(j, pos, i)) {
        printf("%d", pos);
      } else {
        printf(" ");
        columns++;
      }
    }

    ENDL;
  }

  return 0;
}