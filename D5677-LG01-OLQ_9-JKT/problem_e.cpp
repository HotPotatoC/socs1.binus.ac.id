#include <stdio.h>
#include <string.h>
#include <math.h>
#define lld long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n) % 2 != 0)
#define IS_EVEN(n) ((n) % 2 == 0)

#define PLAYER 'P'
#define FOOD '*'
#define FLOOR '.'
#define WALL '#'

int n, m, count = 0;
char map[101][101];

void count_valid_foods(int curr_x, int curr_y)
{
    if (map[curr_x][curr_y] == FOOD)
        count++;

    if (map[curr_x][curr_y] == WALL || map[curr_x][curr_y] == ' ' || curr_x < 0 || curr_x >= n || curr_y < 0 || curr_y >= m)
        return;
    else
        map[curr_x][curr_y] = WALL;

    count_valid_foods(curr_x + 1, curr_y);
    count_valid_foods(curr_x - 1, curr_y);
    count_valid_foods(curr_x, curr_y + 1);
    count_valid_foods(curr_x, curr_y - 1);
}

int main()
{
    int tc;
    scanf("%d", &tc);
    for (int t = 0; t < tc; t++)
    {
        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; i++)
        {
            scanf("%s", map[i]);
        }
        int player_x, player_y;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (map[i][j] == 'P')
                {
                    player_x = i;
                    player_y = j;
                }
            }
        }

        if (player_x != -1 && player_y != -1)
            count_valid_foods(player_x, player_y);
        printf("Case #%d: %d\n", t + 1, count);
        memset(map, 0, sizeof(map));
        count = 0;
    }

    return 0;
}
