#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        char s[1001];
        scanf("%s", s);
        printf("Case #%d : ", tc + 1);
        for (int i = strlen(s) - 1; i >= 0; i--)
        {
            printf("%c", s[i]);
        }
        printf("\n");
    }
    return 0;
}