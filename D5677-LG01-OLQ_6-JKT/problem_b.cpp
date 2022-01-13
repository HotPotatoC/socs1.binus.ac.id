#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        int n;
        scanf("%d", &n);
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
        }

        printf("Case #%d: ", tc + 1);
        for (int i = n - 1; i >= 0; i--)
        {
            printf("%lld", a[i]);
            if (i != 0)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}