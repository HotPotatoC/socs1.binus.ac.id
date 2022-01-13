#include <stdio.h>

void solve()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", (a / b) << b);
}

int main()
{
    // what is the 3 even for??
    int n;
    scanf("%d", &n);

    while (n--)
    {
        solve();
    }
    return 0;
}