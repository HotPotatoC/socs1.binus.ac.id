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
        char time[9];
        scanf(" %[^\n]", time);
        int h1 = ((int)time[0] - '0') * 10;
        int h2 = time[1] - '0';
        char ap = time[6];

        int hours = h1 + h2;
        if (hours >= 12 && ap == 'a')
            hours -= 12;
        if (hours <= 11 && ap == 'p')
            hours += 12;

        printf("Case #%d: %02d:%c%c\n", t + 1, hours, time[3], time[4]);
    }

    return 0;
}