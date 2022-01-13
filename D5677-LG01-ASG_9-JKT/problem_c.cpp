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

int F(int n)
{
    if (n == 1)
        return 1;
    if (IS_ODD(n))
        return F(n - 1) + F(n + 1);
    if (IS_EVEN(n))
        return F(n / 2);
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        int n;
        scanf("%d", &n);

        printf("Case #%d: %d\n", tc + 1, F(n));
    }

    return 0;
}