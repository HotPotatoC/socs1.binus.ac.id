#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        printf("Case #%d:\n", tc + 1);
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            if (i % 15 == 0)
                printf("%d Lili\n", i);
            else if (i % 3 == 0 || i % 5 == 0)
                printf("%d Jojo\n", i);
            else
                printf("%d Lili\n", i);
        }
    }

    return 0;
}