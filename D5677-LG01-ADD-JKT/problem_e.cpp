#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int j, l, b;
    scanf("%d %d %d", &j, &l, &b);
    int jlb_sum = j + l + b;
    int psum = 0;
    for (int i = 0; i < n; i++)
    {
        int pscore;
        scanf("%d", &pscore);
        psum += pscore;
    }
    int avg = (jlb_sum + psum) / (n + 3);

    if (j < avg)
        printf("Jojo tidak lolos\n");
    else
        printf("Jojo lolos\n");

    if (l < avg)
        printf("Lili tidak lolos\n");
    else
        printf("Lili lolos\n");

    if (b < avg)
        printf("Bibi tidak lolos\n");
    else
        printf("Bibi lolos\n");
    return 0;
}