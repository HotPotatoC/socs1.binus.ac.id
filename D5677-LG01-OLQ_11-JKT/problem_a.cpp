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

int binary_search(int *dp, int l, int r, int x) {
  int result = -1;
  while (l <= r) {
    int m = l + (r - l) / 2;
    if (dp[m] == x) {
      result = m;
      r = m - 1;
    } else if (dp[m] < x)
      l = m + 1;
    else
      r = m - 1;
  }
  return result;
}

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int dp[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &dp[i]);

  while (m--) {
    int q;
    scanf("%d", &q);
    int pos = binary_search(dp, 0, n - 1, q);
    if (pos == -1)
      printf("-1\n");
    else
      printf("%d\n", pos + 1);
  }

  return 0;
}