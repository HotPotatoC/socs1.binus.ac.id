#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define lld long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n) % 2 != 0)
#define IS_EVEN(n) ((n) % 2 == 0)
#define INF 1e9

lld search(lld m) {
  lld l = 0, r = 1500000, mid;

  while (l < r) {
    mid = l + (r - l) / 2;
    lld ans = mid * (mid + 1) * (2 * mid + 1) / 6;
    if (ans < m)
      l = mid + 1;
    else
      r = mid;
  }

  return l;
}

int main() {
  int tc;
  scanf("%d", &tc);
  for (int l = 0; l < tc; l++) {
    lld m;
    scanf("%lld", &m);

    printf("Case #%d: %lld\n", l + 1, search(m));
  }
  return 0;
}