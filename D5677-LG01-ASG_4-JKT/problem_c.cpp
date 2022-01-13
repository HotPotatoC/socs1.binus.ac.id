#include <stdio.h>

int main()
{
    // solution
    double a, b, c, d;
    double a2, b2, c2, d2;
    double a3, b3, c3, d3;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    scanf("%lf %lf %lf %lf", &a2, &b2, &c2, &d2);
    scanf("%lf %lf %lf %lf", &a3, &b3, &c3, &d3);

    double r1 = (a / 1) * 2 + (b / 2) * 4 + (c / 3) * 6 + (d / 4) * 4;
    double r2 = (a2 / 1) * 2 + (b2 / 2) * 4 + (c2 / 3) * 6 + (d2 / 4) * 4;
    double r3 = (a3 / 1) * 2 + (b3 / 2) * 4 + (c3 / 3) * 6 + (d3 / 4) * 4;

    printf("%.2lf\n", r1);
    printf("%.2lf\n", r2);
    printf("%.2lf\n", r3);
    return 0;
}