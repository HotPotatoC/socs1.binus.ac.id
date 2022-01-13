#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int views[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &views[i]);
    }

    int q;
    scanf("%d", &q);
    for (int tc = 0; tc < q; tc++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int sum = 0;
        for (int i = a - 1; i < b; i++)
        {
            sum += views[i];
        }

        printf("Case #%d: %d\n", tc + 1, sum);
    }
    return 0;
}