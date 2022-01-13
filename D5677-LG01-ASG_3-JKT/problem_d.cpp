#include <stdio.h>

int main()
{
    long int n;
    scanf("%d", &n);
    int diff = n / 2;
    int diff2 = diff + 1;
    printf("%d = %d + %d\n", n, diff, diff2);
    return 0;
}