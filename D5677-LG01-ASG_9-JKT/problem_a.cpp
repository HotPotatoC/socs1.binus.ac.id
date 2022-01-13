#include <stdio.h>
#include <string.h>
#include <math.h>
#define lld long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n) % 2 != 0)
#define IS_EVEN(n) ((n) % 2 == 0)
#define INF 1e9

void reverse(char s[1001], int lidx, int ridx)
{
    if (lidx >= ridx)
        return;
    char temp = s[lidx];
    s[lidx] = s[ridx];
    s[ridx] = temp;
    reverse(s, lidx + 1, ridx - 1);
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        char s[1001];
        scanf(" %[^\n]", s);

        reverse(s, 0, strlen(s) - 1);
        printf("Case #%d: %s\n", tc + 1, s);
    }

    return 0;
}