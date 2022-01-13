#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define lld long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n)&1)
#define IS_EVEN(n) ((n)&1 == 0)

int main()
{
    int tc;
    scanf("%d", &tc);
    for (int t = 0; t < tc; t++)
    {
        double a, b, c;
        scanf("%lf %lf %lf", &a, &b, &c);
        double percentage = b / 100;
        double cashback = a * percentage;
        if (cashback > c)
            cashback = c;

        printf("Case #%d: %.0lf\n", t + 1, cashback);
    }

    return 0;
}