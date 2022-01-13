#include <stdio.h>
#include <string.h>
#include <math.h>
#define lld long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n) % 2 != 0)
#define IS_EVEN(n) ((n) % 2 == 0)
#define INF 1e9

int fib(int n, char s0, char s1)
{
    if (n == 0)
    {
        printf("%c", s0);
        return 0;
    }
    if (n == 1)
    {
        printf("%c", s1);
        return 1;
    }

    return fib(n - 1, s0, s1) + fib(n - 2, s0, s1);
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        int n;
        char s0, s1;
        scanf("%d %c %c", &n, &s0, &s1);

        printf("Case #%d: ", tc + 1);
        fib(n, s0, s1);
        puts("");
    }

    return 0;
}