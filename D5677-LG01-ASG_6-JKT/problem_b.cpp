#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        int n;
        scanf("%d", &n);
        long long int ws[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%lld", &ws[i][j]);
            }
        }
        printf("Case #%d: ", tc + 1);
        long long int sum[n];
        for (int i = 0; i < n; i++)
        {
            sum[i] = 0;
            for (int j = 0; j < n; j++)
            {
                sum[i] += ws[j][i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%lld", sum[i]);
            if (i != n - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}