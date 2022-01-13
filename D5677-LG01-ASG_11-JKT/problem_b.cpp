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
  int tc;
  scanf("%d", &tc);
  for (int t = 0; t < tc; t++) {
    int n;
    uint64 m;
    scanf("%d %lld", &n, &m);

    uint64 a[n];
    for (int i = 0; i < n; i++) {
      scanf("%lld", &a[i]);
    }

    int max_size = -1;
    int count = 0;
    uint64 sum = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i; j < n; j++) {
        sum += a[j];
        if (sum <= m) {
            max_size = MAX(max_size, j - i + 1);
        }
      }
      sum = 0;
    }

    printf("Case #%d: %d\n", t + 1, max_size);
  }

  return 0;
}
