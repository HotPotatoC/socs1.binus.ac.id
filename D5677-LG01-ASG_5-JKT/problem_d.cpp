#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        if (i == 1 || i == n) {
          printf("*");
        }
        if (i > 1 && i < n) {
          if (j == i || j == (n + 1 - i))
            printf("*");
          else if (j == 1 || j == n)
            printf("*");
          else
            printf(" ");
        }
      }
      printf("\n");
    }

    printf("\n");
  }
  return 0;
}
