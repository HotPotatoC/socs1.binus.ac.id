#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    char s[n];
    scanf("%s", s);
    while (m--)
    {
        int q;
        scanf("%d", &q);
        if (s[q] >= 'a' && s[q] <= 'z')
            s[q] = s[q] - 32;
        else
            s[q] = s[q] + 32;
    }
    printf("%s\n", s);
}