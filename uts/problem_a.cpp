#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char s[101];
        scanf("%[^\n]", s);
        getchar();
        int is_palindrome = 1;

        int idx = 0;
        for (int i = 0; s[i]; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] += 32;
            if (s[i] != ' ')
                s[idx++] = s[i];
        }
        s[idx] = '\0';
        int right_idx = strlen(s) - 1;

        for (int i = 0; i < idx / 2; i++)
        {
            if (s[i] != s[right_idx - i])
            {
                is_palindrome = 0;
                break;
            }
        }

        if (is_palindrome)
            printf("true\n");
        else
            printf("false\n");
    }
    return 0;
}