#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int c[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &c[i]);

    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        c[a - 1] = b;
        printf("Case #%d: ", i+1);
        for (int j = 0; j < n; j++)
        {
            printf("%d", c[j]);
            if (j != n - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}