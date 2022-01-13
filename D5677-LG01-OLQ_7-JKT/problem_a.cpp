#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    printf("%c%c\n", s[n - 1], s[0]);
}

int main()
{
    int n = 3;
    while (n--)
        solve();
    return 0;
}