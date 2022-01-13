#include <stdio.h>

int main() {
  int t = 3;
  while (t--){
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    printf("%c%c\n", s[n-1], s[0]);
  }
  return 0;
}
