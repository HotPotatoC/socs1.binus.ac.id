#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int b = a + a;
    int c = b - 1;
    printf("%d plus %d is %d\n", a, a, b);
    printf("minus one is %d\n", c);
    return 0;
}