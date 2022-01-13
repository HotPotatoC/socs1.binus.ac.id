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

typedef struct schedule
{
    int time;
    char code[9];
    char day[10];
} schedule_t;

int main()
{
    int n;
    scanf("%d", &n);
    schedule_t schedules[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", schedules[i].code);
        scanf("%s", schedules[i].day);
        scanf("%d", &schedules[i].time);
    }

    int q;
    scanf("%d", &q);
    int queries[q];
    for (int i = 0; i < q; i++)
        scanf("%d", &queries[i]);

    for (int i = 0; i < q; i++)
    {
        int idx = queries[i] - 1;
        printf("Query #%d:\n", i + 1);
        printf("Code: %s\n", schedules[idx].code);
        printf("Day: %s\n", schedules[idx].day);
        printf("Time: %02d:00\n", schedules[idx].time);
    }

    return 0;
}