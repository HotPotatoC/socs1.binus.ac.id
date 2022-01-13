#include <stdio.h>

int main()
{
    int A, B;
    long int sum = 0;
    scanf("%d %d", &A, &B);
    for (int i = A; i <= B; i++)
    {
        sum += i;
    }

    printf("%ld\n", sum);

    return 0;
}