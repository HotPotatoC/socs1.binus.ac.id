#include <stdio.h>

void bubble_sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int ins[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &ins[i]);

        bubble_sort(ins, n);
        int min = 9999;

        for (int i = 0; i < n - 1; i++)
        {
            if (ins[i + 1] - ins[i] < min)
                min = ins[i + 1] - ins[i];
        }

        printf("%d\n", min);
    }
    return 0;
}