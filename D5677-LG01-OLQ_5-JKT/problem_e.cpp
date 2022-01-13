#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    for (int c = 1; c <= t; c++)
    {
        int maxNum = 200000;
        int arr[maxNum];
        for (int i = 0; i < maxNum; i++)
        {
            arr[i] = 0;
        }
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            int angka;
            scanf("%d", &angka);
            arr[angka - 1]++;
        }
        int max = 0;
        for (int i = 0; i < maxNum; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
        }
        printf("Case #%d: %d\n", c, max);
        bool first = true;
        for (int i = 0; i < maxNum; i++)
        {
            if (max == arr[i])
            {
                if (first)
                {
                    printf("%d", i + 1);
                    first = false;
                }
                else
                {
                    printf(" %d", i + 1);
                }
            }
        }
        printf("\n");
    }
}