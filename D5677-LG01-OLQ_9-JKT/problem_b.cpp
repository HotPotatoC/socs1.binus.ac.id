#include <stdio.h>
#include <math.h>
#define lld long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n)&1)
#define IS_EVEN(n) ((n)&1 == 0)

int count;

int fib(int n)
{
    count++;
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int tc;
    scanf("%d", &tc);

    for (int t = 0; t < tc; t++)
    {
        count = 0;
        int n;
        scanf("%d", &n);
        fib(n);
        printf("Case #%d: %d\n", t + 1, count);
    }

    return 0;
}