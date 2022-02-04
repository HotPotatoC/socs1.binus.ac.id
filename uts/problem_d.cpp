#include <stdio.h>

int main()
{
    int min_apple, max_apple;
    scanf("%d", &min_apple);
    scanf("%d", &max_apple);
    for (int i = min_apple; i <= max_apple; i++)
    {
        if (i % 7 == 6 && i % 5 == 4 && i % 3 == 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}