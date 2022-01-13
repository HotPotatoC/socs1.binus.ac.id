#include <stdio.h>

int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long int left_op = a * b;
    long long int right_op = c - d;
    if (left_op == right_op)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}