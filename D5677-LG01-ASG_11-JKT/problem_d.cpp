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

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int dp[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &dp[i]);

  int remove[1000];
  memset(remove, 0, sizeof(remove));
  for (int i = 0; i < m; i++) {
    int n;
    scanf("%d", &n);
    remove[n] = n;
  }

  int max = -1;
  for (int i = 0; i < n; i++) {
    if (max < dp[i] && remove[dp[i]] != dp[i])
      max = dp[i];
  }

  printf("Maximum number is %d\n", max);

  return 0;
}