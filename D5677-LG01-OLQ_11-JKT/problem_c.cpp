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

void fill_prefix_sum(lld *dp, int n, lld *ps) {
  ps[0] = dp[0];
  for (int i = 1; i < n; i++)
    ps[i] = ps[i - 1] + dp[i];
}

int least_sum_diff_search(lld *dp, int l, int r, lld key) {
  int result = -1;
  while (l <= r) {
    int m = l + (r - l) / 2;
    if (dp[m] == key) {
      result = m;
      break;
    } else if (dp[m] <= key) {
      result = m;
      l = m + 1;
    } else {
      r = m - 1;
    }
  }
  return result;
}

int main() {
  int n;
  scanf("%d", &n);
  lld dp[n];
  for (int i = 0; i < n; i++)
    scanf("%lld", &dp[i]);

  int q;
  scanf("%d", &q);

  lld ps[n];
  fill_prefix_sum(dp, n, ps);

  for (int i = 0; i < q; i++) {
    lld m;
    scanf("%lld", &m);

    int pos = least_sum_diff_search(ps, 0, n - 1, m);
    if (pos == -1)
      printf("Case #%d: %d\n", i + 1, -1);
    else
      printf("Case #%d: %d\n", i + 1, pos + 1);
  }

  return 0;
}

/*
4
3 2 7 6
3
8
20
12
*/