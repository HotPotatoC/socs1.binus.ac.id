#include <stdio.h>
#include <math.h>
#define lld long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n)&1)
#define IS_EVEN(n) ((n)&1 == 0)

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        lld n;
        scanf("%lld", &n);
        int count = 0;
        for (lld i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                count++;
                if (i != n / i)
                    count++;
            }
        }

        printf("Case #%d: %d\n", tc + 1, count);
    }
    return 0;
}