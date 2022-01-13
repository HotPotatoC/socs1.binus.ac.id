#include <stdio.h>
#include <string.h>
#define lld long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n)&1)
#define IS_EVEN(n) ((n)&1 == 0)

void merge_sort(char *arr, char *temp, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        merge_sort(arr, temp, left, mid);
        merge_sort(arr, temp, mid + 1, right);
        int i = left, j = mid + 1, k = left;
        while (i <= mid && j <= right)
        {
            if (arr[i] < arr[j])
            {
                temp[k++] = arr[i++];
            }
            else
            {
                temp[k++] = arr[j++];
            }
        }
        while (i <= mid)
        {
            temp[k++] = arr[i++];
        }
        while (j <= right)
        {
            temp[k++] = arr[j++];
        }
        for (i = left; i <= right; i++)
        {
            arr[i] = temp[i];
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        int m;
        int count = 0;
        char str[100001];
        scanf("%s", str);
        char temp[100001];
        merge_sort(str, temp, 0, strlen(str) - 1);

        for (int i = 0; i < strlen(str); i++)
        {
            if (i == 0 || str[i] != str[i - 1])
            {
                count++;
            }
        }

        printf("Case #%d: %s\n", tc + 1, IS_ODD(count) ? "Unbreakable" : "Breakable");
    }
    return 0;
}