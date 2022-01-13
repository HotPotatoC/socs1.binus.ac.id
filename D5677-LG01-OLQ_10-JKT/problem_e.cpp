#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define lld long long int
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
        char number[100001];
        scanf("%s", number);

        lld n = strlen(number);
        int odd_sum = 0, even_sum = 0;
        for (lld i = 0; i < n; i++)
        {
            if (IS_ODD(i))
                odd_sum += number[i] - '0';
            if (IS_EVEN(i))
                even_sum += number[i] - '0';
        }

        if ((odd_sum - even_sum) % 11 == 0)
            printf("Case #%d: Yeah\n", t + 1);
        else
            printf("Case #%d: Nah\n", t + 1);

        memset(number, 0, sizeof(number));
    }

    return 0;
}