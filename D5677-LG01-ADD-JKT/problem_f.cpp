#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        int size;
        scanf("%d", &size);
        printf("Case #%d:\n", tc + 1);
        for (int i = 0; i < size; i++)
        {
            for (int j = i; j < size - 1; j++)
                printf(" ");
            for (int k = 0; k < i + 1; k++)
            {
                if (size % 2 == 0)
                {
                    if (k % 2 == 0)
                        printf("#");
                    else
                        printf("*");
                }
                else
                {
                    if (k % 2 == 0)
                        printf("*");
                    else
                        printf("#");
                }
            }
            printf("\n");
        }
    }

    return 0;
}