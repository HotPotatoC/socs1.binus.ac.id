#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define lld long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n)&1)
#define IS_EVEN(n) ((n)&1 == 0)
#define N_MAX 1e9

typedef struct item
{
    char id[9];
    char name[16];
    lld price;
} item_t;

int main()
{
    int n;
    scanf("%d", &n);
    item_t items[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", items[i].id);
        scanf(" %[^\n]", items[i].name);
        scanf(" %lld", &items[i].price);
    }

    lld median;
    if (n % 2 == 0)
        median = (items[n / 2].price + items[n].price) / 2;
    else
        median = items[n / 2].price;
    
    printf("%lld\n", median);
    for (int i = 0; i < n; i++)
        if (items[i].price >= median)
            printf("%s %s\n", items[i].id, items[i].name);

    return 0;
}
