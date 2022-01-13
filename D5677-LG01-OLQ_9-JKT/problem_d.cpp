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

#define EMPTY_SQUARE 0

char board_x[9] = "ABCDEFGH";
char board_y[9] = "12345678";
int board[8][8];

int min = INF;
int origin_x, origin_y, before_x, before_y, count = 0;

int abs(int a)
{
    if (a < 0)
        return -a;
    else
        return a;
}

int count_shortest_path(int x, int y, int dx, int dy)
{
    if (x == dx && y == dy)
        return board[0][0];

    if (board[abs(x - dx)][abs(y - dy)] != EMPTY_SQUARE)
        return board[abs(x - dx)][abs(y - dy)];

    int x1, y1, x2, y2;

    if (x <= dx)
    {
        if (y <= dy)
        {
            x1 = x + 2;
            y1 = y + 1;
            x2 = x + 1;
            y2 = y + 2;
        }
        else
        {
            x1 = x + 2;
            y1 = y - 1;
            x2 = x + 1;
            y2 = y - 2;
        }
    }
    else
    {
        if (y <= dy)
        {
            x1 = x - 2;
            y1 = y + 1;
            x2 = x - 1;
            y2 = y + 2;
        }
        else
        {
            x1 = x - 2;
            y1 = y - 1;
            x2 = x - 1;
            y2 = y - 2;
        }
    }

    board[abs(x - dx)][abs(y - dy)] = MIN(count_shortest_path(x1, y1, dx, dy), count_shortest_path(x2, y2, dx, dy)) + 1;

    board[abs(y - dy)][abs(x - dx)] = board[abs(x - dx)][abs(y - dy)];
    return board[abs(x - dx)][abs(y - dy)];
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

        // Corner cases
        if ((origin_x == 1 && origin_y == 1 && destination_x == 2 && destination_y == 2) || (origin_x == 2 && origin_y == 2 && destination_x == 1 && destination_y == 1))
        {
            printf("Case #%d: %d\n", t + 1, 4);
        }
        else if ((origin_x == 1 && origin_y == 8 && destination_x == 2 && destination_y == 7) || (origin_x == 2 && origin_y == 7 && destination_x == 1 && destination_y == 8))
        {
            printf("Case #%d: %d\n", t + 1, 4);
        }
        else if ((origin_x == 8 && origin_y == 1 && destination_x == 7 && destination_y == 2) || (origin_x == 7 && origin_y == 2 && destination_x == 8 && destination_y == 1))
        {
            printf("Case #%d: %d\n", t + 1, 4);
        }
        else if ((origin_x == 8 && origin_y == 8 && destination_x == 7 && destination_y == 7) || (origin_x == 7 && origin_y == 7 && destination_x == 8 && destination_y == 8))
        {
            printf("Case #%d: %d\n", t + 1, 4);
        }

        else
        {
            board[1][0] = 3;
            board[0][1] = 3;
            board[1][1] = 2;
            board[2][0] = 2;
            board[0][2] = 2;
            board[2][1] = 1;
            board[1][2] = 1;

            printf("Case #%d: %d\n", t + 1, count_shortest_path(origin_x, origin_y, destination_x, destination_y));
        }

        memset(board, 0, sizeof(board));
    }
    return 0;
}