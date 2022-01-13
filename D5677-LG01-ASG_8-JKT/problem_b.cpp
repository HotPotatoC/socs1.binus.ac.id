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
#define N_MAX 1e9

int main()
{
    int n;
    scanf("%d", &n);
    lld a[n];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    lld max_profit = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            max_profit += a[i];

    printf("%lld\n", max_profit);

    return 0;
}