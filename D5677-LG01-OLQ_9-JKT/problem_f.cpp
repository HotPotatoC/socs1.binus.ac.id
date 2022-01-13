#include <stdio.h>
#include <math.h>
#define lld long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n) % 2 != 0)
#define IS_EVEN(n) ((n) % 2 == 0)

#define LEFT_LEAF(idx) 2 * idx
#define RIGHT_LEAF(idx) (2 * idx) + 1

/*
3
7
1 2 3 4 5 6 7
5
1 2 3 4 5
2
3 3
*/
int n;
int flag = 1;

void sum_of_leafs(int tree[], int idx, int sum)
{
    sum += tree[idx - 1];
    if (LEFT_LEAF(idx) > n)
    {
        printf("%d\n", sum);
        return;
    }

    if (LEFT_LEAF(idx) <= n)
    {
        sum_of_leafs(tree, LEFT_LEAF(idx), sum);
    }
    if (RIGHT_LEAF(idx) <= n)
    {
        sum_of_leafs(tree, RIGHT_LEAF(idx), sum);
    }
}

int main()
{
    int tc;
    scanf("%d", &tc);
    for (int t = 0; t < tc; t++)
    {
        scanf("%d", &n);
        int tree[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &tree[i]);

        printf("Case #%d:\n", t + 1);
        if (n == 1)
            printf("%d\n", tree[0]);
        else if (n == 2)
            printf("%d\n", tree[0] + tree[1]);
        else
            sum_of_leafs(tree, 1, 0);
    }
    return 0;
}