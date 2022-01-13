#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        int n;
        scanf("%d", &n);
        long long int res[n], minimum[n];
        for (int i = 0; i < n; i++)
            scanf("%lld", &res[i]);
        for (int i = 0; i < n; i++)
            scanf("%lld", &minimum[i]);
        int tests_failed = 0;
        for (int i = 0; i < n; i++)
            if (res[i] < minimum[i])
                tests_failed++;
        printf("Case #%d: %d\n", tc + 1, tests_failed);
    }
    return 0;
}