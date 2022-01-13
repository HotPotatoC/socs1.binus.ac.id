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
    int n, k;
    scanf("%d %d", &n, &k);
    int banana_weights[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &banana_weights[i]);

    int count = 0;
    for (int i = 0; i < n; i++) {
      if (banana_weights[i] >= k)
        count++;
    }

    printf("Case #%d: %d\n", t + 1, count);
  }

  return 0;
}