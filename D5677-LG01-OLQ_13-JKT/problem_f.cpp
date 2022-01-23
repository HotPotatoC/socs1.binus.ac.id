#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n) % 2 != 0)
#define IS_EVEN(n) ((n) % 2 == 0)

typedef signed long long int int64;
typedef unsigned long long int uint64;

/*
5
6 1 3 4 6
10

5
1 2 3 4 5
14
*/

int main() {
  int n;
  scanf("%d", &n);

  int64 nums[n];
  for (int i = 0; i < n; i++)
    scanf("%lld", &nums[i]);

  int64 soft_limit;
  scanf("%lld", &soft_limit);

  int64 total[n + 5];
  memset(total, 0, sizeof(total));

  for (int64 i = n - 1; i >= 0; i--)
    total[i] = nums[i] + total[i + 1];

  int64 ans = INT_MIN;

  int a = 0;
  int k = 1;

  int64 sum[n + 5];
  memset(sum, 0, sizeof(sum));

  for (int64 x = n - 1; x >= 0; x--) {
    sum[x] = nums[x] * k + sum[x + 1];

    while (sum[x] > soft_limit) {
      sum[x] -= (total[x] - total[n - a]);
      a++;
      k--;
    }

    if (sum[x] > ans)
      ans = sum[x];

    k++;
  }

  printf("%lld\n", ans);

  return 0;
}