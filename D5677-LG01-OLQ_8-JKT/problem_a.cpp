#include <stdio.h>
#define lld long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if ((a + b) > c && (a + c) > b && (b + c) > a)
            printf("Case #%d: Yes", tc + 1);
        else
            printf("Case #%d: No", tc + 1);
        ENDL;
    }
    return 0;
}