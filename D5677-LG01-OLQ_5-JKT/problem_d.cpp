#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        int n;
        scanf("%d", &n);
        long long int x[n];
        for (int i = 0; i < n; i++)
            scanf("%lld", &x[i]);

        long long int sum = 0;
        for (int i = 0; i < n; i++)
            sum += x[i];

        int n_elements = 0;
        for (int i = 0; i < n; i++)
            if (x[i] > sum)
                n_elements++;

        printf("Case #%d: %lld\n", tc + 1, sum);
        printf("%d\n", n_elements);
    }

    return 0;
}