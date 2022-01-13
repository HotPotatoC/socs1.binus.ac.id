#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        int n;
        scanf("%d", &n);
        int a1[n], a2[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a2[i]);
        }
        printf("Case #%d: ", tc+1);
        for (int i = 0; i < n; i++)
        {
            printf("%d", a1[i] - a2[i]);
            if (i != n - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}