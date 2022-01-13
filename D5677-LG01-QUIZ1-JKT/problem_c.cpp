#include <stdio.h>
#include <string.h>

#define lld long long int
#define ISLOWERCASE(s) (s >= 'a' && s <= 'z')

int main()
{
    char s[10001];
    scanf("%[^\n]", s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (ISLOWERCASE(s[i]))
            s[i] -= 32;

        switch (s[i])
        {
        case 'I':
            s[i] = '1';
            break;
        case 'R':
            s[i] = '2';
            break;
        case 'E':
            s[i] = '3';
            break;
        case 'A':
            s[i] = '4';
            break;
        case 'S':
            s[i] = '5';
            break;
        case 'G':
            s[i] = '6';
            break;
        case 'T':
            s[i] = '7';
            break;
        case 'B':
            s[i] = '8';
            break;
        case 'P':
            s[i] = '9';
            break;
        case 'O':
            s[i] = '0';
            break;
        }
    }

    printf("%s\n", s);

    return 0;
}