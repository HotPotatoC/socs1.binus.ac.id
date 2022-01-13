#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define lld long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n) % 2 != 0)
#define IS_EVEN(n) ((n) % 2 == 0)
#define INF 1e9

#define EMPTY_SQUARE -2
#define TOUCHED_SQUARE -1
#define HORSE 1
#define TARGET_SQUARE 2

char board_x[9] = "ABCDEFGH";
char board_y[9] = "12345678";
int board[8][8];

int min = INF;
int origin_x, origin_y, before_x, before_y, count = 0;

void count_shortest_path(int x, int y, int dt, int dy, int count)
{
    if (x == dt && y == dy)
    {
        printf("%d\n", count);
        min = MIN(min, count);
        return;
    }

    if (x < 0 || x > 7 || y < 0 || y > 7 || board[x][y] == TOUCHED_SQUARE)
        return;

    board[x][y] = TOUCHED_SQUARE;
    count++;

    count_shortest_path(x + 2, y + 1, dt, dy, count);
    count_shortest_path(x + 2, y - 1, dt, dy, count);
    count_shortest_path(x - 2, y + 1, dt, dy, count);
    count_shortest_path(x - 2, y - 1, dt, dy, count);
    count_shortest_path(x + 1, y + 2, dt, dy, count);
    count_shortest_path(x + 1, y - 2, dt, dy, count);
    count_shortest_path(x - 1, y + 2, dt, dy, count);
    count_shortest_path(x - 1, y - 2, dt, dy, count);
}

int main()
{
    int tc;
    scanf("%d", &tc);
    for (int t = 0; t < tc; t++)
    {
        count = 0;
        char origin[3], destination[3];
        scanf("%s %s", origin, destination);
        int destination_x, destination_y;
        for (int i = 0; i < 8; i++)
        {
            if (origin[0] == board_x[i])
                origin_x = i;
            if (destination[0] == board_x[i])
                destination_x = i;
        }

        for (int i = 0; i < 8; i++)
        {
            if (origin[1] == board_y[i])
                origin_y = i;
            if (destination[1] == board_y[i])
                destination_y = i;
        }

        memset(board, 0, sizeof(board));
        board[origin_x][origin_y] = HORSE;
        board[destination_x][destination_y] = TARGET_SQUARE;

        // Display chess board by rotating 90 degree
        for (int i = 7; i >= 0; i--)
        {
            for (int j = 0; j < 8; j++)
            {
                printf("%d ", board[j][i]);
            }
            ENDL;
        }

        count_shortest_path(origin_x, origin_y, destination_x, destination_y, 0);
        printf("Case #%d: %d\n", t + 1, min);
        min = INF;
        count = 0;
    }
    return 0;
}