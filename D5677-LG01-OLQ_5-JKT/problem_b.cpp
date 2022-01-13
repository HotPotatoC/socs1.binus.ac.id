#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int indices[n], values[n], resulting_array[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &indices[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &values[i]);

    for (int i = 0; i < n; i++)
        resulting_array[indices[i]] = values[i];

    for (int i = 0; i < n; i++)
    {
        printf("%d", resulting_array[i]);
        if (i != n - 1)
            printf(" ");
    }
    printf("\n");
    return 0;
}