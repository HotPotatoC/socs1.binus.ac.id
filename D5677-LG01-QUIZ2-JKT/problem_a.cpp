#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef signed long long int int64;
typedef unsigned long long int uint64;

int lili_equation(int m, int n) {
  if (m == 0) {
    return 1;
  }

  if (n == 0) {
    return 1;
  }

  return lili_equation(m - 1, n - 1) + lili_equation(m - 1, n) +
         lili_equation(m, n - 1);
}

int main() {
  int m, n;
  scanf("%d %d", &m, &n);

  int ans = lili_equation(m, n);

  printf("%d\n", ans);
  return 0;
}