#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        int count = 0;
        int n;
        scanf("%d", &n);
        // Count factors of n that are less than sqrt(n)
        for (int i = 1; i <= sqrt(n); i++)
        {
            // If i is a factor of n
            if (n % i == 0)
            {
                count++;
                // Then, because i and n/i are both factors of n,
                // we must add 1 to count
                if (n / i != i)
                    count++;
            }
        }
        printf("Case #%d: %d\n", tc + 1, count);
    }

    return 0;
}