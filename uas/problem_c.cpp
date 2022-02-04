#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declare as globals, so recursive functions can easily access them
// (to avoid passing them as parameters)

// n is the size of the map (n x n)
// m is the number of kingdoms to be used as a source of flood fill
int n, m;

// Map with the size of nxn
char map[101][101];

// ans is the number of kingdoms that is used as source of flood fill
int ans[26];

void floodfill(int x, int y, int ans_idx) {
  // If the current position is out of bounds or the current position is
  // a wall, return
  if (map[x][y] == '#' || x < 0 || x > n - 1 || y < 0 || y > n - 1) {
    return;
  }

  // If the current position is an open space, flood fill it
  if (map[x][y] == '.') {
    map[x][y] = '#';
    // Increment the current kingdom's open spaces
    ans[ans_idx]++;
  }

  floodfill(x - 1, y, ans_idx); // Up
  floodfill(x + 1, y, ans_idx); // Down
  floodfill(x, y - 1, ans_idx); // Left
  floodfill(x, y + 1, ans_idx); // Right
}

int main() {
  scanf("%d %d", &n, &m);
  // I used memset to initialize the ans array to -1, so that if a kingdom
  // is not used as a source of flood fill, it will be -1 (just to be safe :D)
  memset(ans, -1, sizeof(ans));

  // Read the map from the input
  for (int i = 0; i < n; i++) {
    scanf("%s", map[i]);
  }

  // Traverse the map to find each kingdom's source of flood fill
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (map[i][j] >= 'a' && map[i][j] <= 'z') {
        // If the current position is a kingdom, get the index of the kingdom
        // by subtracting 'a' from the current position
        // (since the index of the kingdom is the same as the position of the
        // kingdom in the ans array, a=0, b=1, c=2, etc)

        // By subtracting 'a' from the current position, we get the index of
        // the kingdom in the ans array, because 'a' ascii code is 97, and
        // 'a' - 97 = 0, 'b' - 97 = 1, 'c' - 97 = 2, etc
        int idx = map[i][j] - 'a';

        // Set the current position to '1' to mark it as a source of flood fill
        ans[idx] = 1;

        // Flood fill the current position
        floodfill(i, j, idx);
      }
    }
  }

  // Traverse the ans array to print the number of open spaces for each kingdom
  for (int i = 0; i < m; i++) {
    printf("%c %d\n", i + 'a', ans[i]);
  }

  return 0;
}
