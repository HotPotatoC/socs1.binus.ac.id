#include <stdio.h>
#include <math.h>
#define lld long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n)&1)
#define IS_EVEN(n) ((n)&1 == 0)

int fib(int n, int f0, int f1)
{
    if (n == 0)
        return f0;
    if (n == 1)
        return f1;

    return fib(n - 1, f0, f1) + fib(n - 2, f0, f1);
}

int main()
{
    int f0, f1;
    scanf("%d %d", &f0, &f1);
    int k;
    scanf("%d", &k);
    printf("%d\n", fib(k, f0, f1));
    return 0;
}