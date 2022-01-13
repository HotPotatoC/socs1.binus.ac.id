#include <stdio.h>
#define lld long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n)&1)
#define IS_EVEN(n) ((n)&1 == 0)

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        int n;
        scanf("%d", &n);
        int arr[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &arr[i][j]);
        int sum[n];
        for (int i = 0; i < n; i++)
        {
            sum[i] = 0;
            for (int j = 0; j < n; j++)
                sum[i] += arr[j][i];
        }
        printf("Case #%d: ", tc + 1);
        for (int i = 0; i < n; i++)
        {
            printf("%d", sum[i]);
            if (i != n - 1)
                printf(" ");
        }
        ENDL;
    }
    return 0;
}