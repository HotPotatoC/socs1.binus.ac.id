#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        char s[1001], rev[1001];
        scanf("%s", s);
        int len = strlen(s);
        for (int i = 0; i < len; i++)
        {
            rev[i] = s[len - i - 1];
        }
        printf("Case %d: ", tc + 1);
        for (int i = 0; i < len; i++)
        {
            printf("%d", rev[i] % 2);
        }
        printf("\n");
    }
    return 0;
}