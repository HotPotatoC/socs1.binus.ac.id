#include <stdio.h>

#define lld long long int
#define ODD(x) (x % 2 != 0)
#define MIN(x, y) (x < y ? x : y)

int main()
{
    int n;
    scanf("%d", &n);
    lld a[n];
    lld sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        sum += a[i];
    }
    if (ODD(sum))
    {
        for (int i = 0; i < n; i++)
            if (ODD(a[i]))
            {
                sum -= a[i];
                break;
            }
    }
    printf("%lld\n", sum);
    return 0;
}
