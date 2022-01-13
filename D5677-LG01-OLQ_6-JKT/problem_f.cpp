#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        char s[501];
        scanf("%s", s);
        int is_palindrome = 1;
        int left_idx = 0;
        int right_idx = strlen(s) - 1;
        while (left_idx < right_idx)
        {
            if (s[left_idx] != s[right_idx])
            {
                is_palindrome = 0;
                break;
            }
            left_idx++;
            right_idx--;
        }

        printf("Case #%d: ", tc + 1);
        if (is_palindrome)
            printf("Yay, it's a palindrome\n");
        else
            printf("Nah, it's not a palindrome\n");
    }

    return 0;
}