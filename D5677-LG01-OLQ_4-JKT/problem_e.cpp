#include <stdio.h>

int main()
{
    int x;
    double y;
    scanf("%d %lf", &x, &y);
    double result = x * (1 + y / 100) * (1 + y / 100) * (1 + y / 100);
    printf("%.2lf\n", result);
    return 0;
}