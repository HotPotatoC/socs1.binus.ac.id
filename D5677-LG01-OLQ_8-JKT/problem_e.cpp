#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define lld long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n)&1)
#define IS_EVEN(n) ((n)&1 == 0)

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        char str[1001];
        scanf("%s", str);
        printf("Case #%d: ", tc + 1);
        for (int i = strlen(str) - 1; i >= 0; i--)
        {
            if (islower(str[i]))
                printf("%c", toupper(str[i]));
            if (isupper(str[i]))
                printf("%c", tolower(str[i]));
        }
        ENDL;
    }
    return 0;
}