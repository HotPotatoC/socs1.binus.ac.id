#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        int n;
        scanf("%d", &n);
        long long int v[n];
        for (int i = 0; i < n; i++)
            scanf("%lld", &v[i]);

        long long int max_1, max_2;
        max_1 = max_2 = -1000001;
        for (int i = 0; i < n; i++)
        {
            if (max_1 < v[i])
            {
                max_2 = max_1;
                max_1 = v[i];
            }
            else if (max_2 < v[i])
                max_2 = v[i];
        }

        printf("Case #%d: %lld\n", tc + 1, max_1 + max_2);
    }
    return 0;
}