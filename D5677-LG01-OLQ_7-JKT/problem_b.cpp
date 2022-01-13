#include <stdio.h>

void solve()
{
    int bin[31], n, p;
    scanf("%d", &n);
    for (int i = 0; i < 31; i++)
    {
        bin[i] = n % 2;
        n /= 2;
    }
    scanf("%d", &p);
    printf("%d\n", bin[p]);
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
        solve();
    return 0;
}