#include <stdio.h>

const int sizeX = 150;
const int sizeY = 150;
char map[sizeX][sizeY];
int sum;
int jumlahX = -1, jumlahY = -1;

void FloodFill(int x, int y)
{
  if (map[x][y] == '*')
  {
    sum += 1;
  }
  if (map[x][y] == '#' || map[x][y] == ' ' || x < 0 || y < 0 || x >= jumlahX || y >= jumlahY)
  {
    return;
  }
  else
  {
    map[x][y] = '#';
  }
  FloodFill(x + 1, y);
  FloodFill(x - 1, y);
  FloodFill(x, y + 1);
  FloodFill(x, y - 1);
}

int main()
{
  int tc;
  scanf("%d", &tc);
  getchar();
  for (int i = 0; i < tc; i++)
  {
    scanf("%d %d", &jumlahX, &jumlahY);
    getchar();
    int pX = -1, pY = -1;
    for (int j = 0; j < jumlahX; j++)
    {
      scanf("%[^\n]", map[j]);
      getchar();
    }
    // SCAN MAP
    for (int j = 0; j < jumlahX; j++)
    {
      for (int k = 0; k < jumlahY; k++)
      {
        if (map[j][k] == 'P')
        {
          pX = j;
          pY = k;
        }
      }
    }
    // CARI P
    sum = 0;
    if (pX != -1 && pY != -1)
      FloodFill(pX, pY);
    printf("Case #%d: %d\n", i + 1, sum);

    for (int j = 0; j < jumlahX; j++)
    {
      for (int k = 0; k < jumlahY; k++)
      {
        map[j][k] = ' ';
      }
    }
    jumlahX = 0;
    jumlahY = 0;
    // Reset
  }
}