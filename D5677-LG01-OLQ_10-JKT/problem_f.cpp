#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define lld long long int
#define ulld unsigned long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n) % 2 != 0)
#define IS_EVEN(n) ((n) % 2 == 0)
#define INF 1e9

int main()
{
    int tc;
    scanf("%d", &tc);
    for (int t = 0; t < tc; t++)
    {
        ulld n;
        scanf("%lld", &n);

        ulld ans[100];
        int i = 0;
        while (n > 0)
        {
            ans[i++] = n % 2;
            n /= 2;
        }

        printf("Case #%d: ", t + 1);
        for (int j = i - 1; j >= 0; j--)
            printf("%lld", ans[j]);
        ENDL;
    }
    return 0;
}