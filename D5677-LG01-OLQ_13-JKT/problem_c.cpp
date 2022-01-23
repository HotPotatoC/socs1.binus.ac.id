#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define lld long long int
#define uint64 unsigned long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n) % 2 != 0)
#define IS_EVEN(n) ((n) % 2 == 0)

#define FLOOR '.'
#define WALL '#'
#define SOURCE 'S'

/*
2
5 5
#####
#S..#
###.#
#...#
#####
2 2
S.
.#
5 5
#####
#S..#
#####
#...#
#####

1
10 10
##########
#S..######
###...####
#####...##
#######.##
###.....##
###.######
###.###..#
###.....##
##########
*/

int n, m;
int count = 0;

int flood(char map[101][101], int pos_x, int pos_y) {
  if (map[pos_x][pos_y] == WALL || pos_x < 0 || pos_x > n - 1 || pos_y < 0 ||
      pos_y > m - 1)
    return 0;

  if (map[pos_x][pos_y] == FLOOR) {
    map[pos_x][pos_y] = WALL;
    return 1 + flood(map, pos_x + 1, pos_y) + flood(map, pos_x - 1, pos_y) +
           flood(map, pos_x, pos_y + 1) + flood(map, pos_x, pos_y - 1);
  }

  return flood(map, pos_x + 1, pos_y) + flood(map, pos_x - 1, pos_y) +
         flood(map, pos_x, pos_y + 1) + flood(map, pos_x, pos_y - 1);
}

int main() {
  int tc;
  scanf("%d", &tc);
  for (int t = 0; t < tc; t++) {
    scanf("%d %d", &n, &m);
    char map[101][101];
    for (int i = 0; i < n; i++) {
      scanf("%s", map[i]);
    }

    int source_x = -1, source_y = -1;
    for (int x = 0; x < n; x++) {
      for (int y = 0; y < m; y++) {
        if (map[x][y] == SOURCE) {
          source_x = x;
          source_y = y;
          break;
        }
      }
    }

    int ans = flood(map, source_x, source_y);

    printf("Case #%d: %d\n", t + 1, ans);
    count = 0;
  }

  return 0;
}