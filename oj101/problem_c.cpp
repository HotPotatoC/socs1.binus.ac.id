#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    (a % 2 == 0) ? puts("EVEN") : puts("ODD");
    return 0;
}