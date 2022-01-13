#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  for(int tc = 0; tc < t; tc++) {
    int n;
    scanf("%d", &n);
    long long int sum = 0;
    for (int i = 0; i < n; i++) {
      long long int a;
      scanf("%lld", &a);
      sum += a;
    }

    printf("Case #%d: %lld\n", tc+1, sum);
  }
  return 0;
}
