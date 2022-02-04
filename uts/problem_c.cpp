#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        int pass_len, key_len;
        scanf("%d %d", &pass_len, &key_len);
        int pass[pass_len], key[key_len];
        for (int i = 0; i < pass_len; i++)
            scanf("%d", &pass[i]);
        for (int i = 0; i < key_len; i++)
            scanf("%d", &key[i]);

        int n = 0;
        int stop = 0;
        while (n < pass_len && !stop)
        {
            int sum = 0;
            int print_space = 0;
            for (int i = 0; i < key_len; i++)
            {
                if (n + i >= pass_len)
                {
                    stop = 1;
                    break;
                }
                sum += pass[n + i] ^ key[i];
                print_space = 1;
            }

            if (stop == 0)
            {
                if (n != 0 && print_space)
                    printf(" %d", sum);
                else
                    printf("%d", sum);
                n++;
            }
            if (stop)
                break;
        }

        printf("\n");
    }

    return 0;
}