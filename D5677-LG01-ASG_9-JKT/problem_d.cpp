#include <stdio.h>
#include <string.h>
#include <math.h>
#define lld long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n) % 2 != 0)
#define IS_EVEN(n) ((n) % 2 == 0)
#define INF 1e9

int jobonacci(int n)
{
    if (n == 0)
        return 0;
    if (IS_ODD(n))
        return 1;

    return jobonacci(n - 1) + jobonacci(n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", jobonacci(n));

    return 0;
}