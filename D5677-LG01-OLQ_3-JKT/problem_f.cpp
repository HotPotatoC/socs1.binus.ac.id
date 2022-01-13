#include <stdio.h>

int main()
{
    char inputs[5][11];
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", inputs[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%10s|%s\n", inputs[i], inputs[i]);
    }

    return 0;
}