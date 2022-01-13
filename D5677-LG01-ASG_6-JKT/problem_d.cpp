#include <stdio.h>

void sort(long long int *arr, int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int t;
    long long int max, max_count;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        int n;
        scanf("%d", &n);
        long long int a[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%lld", &a[j]);
        }
        max = a[0];
        max_count = 1;
        int count;
        for (int j = 0; j < n; j++)
        {
            count = 1;
            for (int k = j + 1; k < n; k++)
            {
                if (a[j] == a[k])
                {
                    count++;
                }
            }
            if (count > max_count)
            {
                max = a[j];
                max_count = count;
            }
        }

        printf("Case #%d: %lld\n", tc + 1, max_count);
        sort(a, n);

        // Print the smallest element whose number of occurence is equal to max_count
        for (int j = 0; j < n; j++)
        {
            count = 1;
            for (int k = j + 1; k < n; k++)
            {
                if (a[j] == a[k])
                {
                    count++;
                }
            }
            if (count == max_count)
            {
                printf("%lld\n", a[j]);
                break;
            }
        }
    }
    return 0;
}
