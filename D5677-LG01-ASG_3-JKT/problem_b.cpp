#include <stdio.h>

typedef struct people
{
    char name[101];
    double height;
    int age;
} people_t;

int main()
{
    people_t p1, p2;
    scanf("%s %lf %d %s %lf %d",
          p1.name, &p1.height, &p1.age,
          p2.name, &p2.height, &p2.age);

    printf("Name 1: %s\n", p1.name);
    printf("Height 1: %.2lf\n", p1.height);
    printf("Age 1: %d\n", p1.age);

    printf("Name 2: %s\n", p2.name);
    printf("Height 2: %.2lf\n", p2.height);
    printf("Age 2: %d\n", p2.age);
    return 0;
}