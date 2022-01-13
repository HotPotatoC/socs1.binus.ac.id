#include <stdio.h>
#include <math.h>
#define lld long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n) % 2 != 0)
#define IS_EVEN(n) ((n) % 2 == 0)

int found = 0, b;

int calc_a(int a)
{
    // This is the collatz conjecture problem :D
    if (a == b)
    {
        found = 1;
        return a;
    }
    if (a == 1)
        return 1;
    if (IS_EVEN(a))
        return calc_a(a / 2);
    if (IS_ODD(a))
        return calc_a(a * 3 + 1);

    return a;
}

int main()
{
    int tc;
    scanf("%d", &tc);

    for (int t = 0; t < tc; t++)
    {
        found = 0;
        int a;
        scanf("%d %d", &a, &b);
        int ans = calc_a(a);
        printf("Case #%d: ", t + 1);
        if (found)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}