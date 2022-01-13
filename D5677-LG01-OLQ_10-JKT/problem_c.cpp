#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define lld long long int
#define ENDL printf("\n")
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define IS_ODD(n) ((n) % 2 != 0)
#define IS_EVEN(n) ((n) % 2 == 0)
#define INF 1e9

typedef struct student
{
    char code[31];
    char name[31];
    char gender[10];
    char father_name[31];
    char mother_name[31];
    int siblings;
} student_t;

typedef struct lecturer
{
    char code[31];
    char name[31];
    char gender[10];
    int n_students;
    student_t *students;
} lecturer_t;

int main()
{
    int n;
    scanf("%d", &n);
    lecturer_t lecturers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", lecturers[i].code);
        scanf("%s", lecturers[i].name);
        scanf("%s", lecturers[i].gender);
        scanf("%d", &lecturers[i].n_students);
        lecturers[i].students = (student_t *)malloc(lecturers[i].n_students * sizeof(student_t));

        for (int j = 0; j < lecturers[i].n_students; j++)
        {
            scanf("%s", lecturers[i].students[j].code);
            scanf("%s", lecturers[i].students[j].name);
            scanf("%s", lecturers[i].students[j].gender);
            scanf("%s", lecturers[i].students[j].father_name);
            scanf("%s", lecturers[i].students[j].mother_name);
            scanf("%d", &lecturers[i].students[j].siblings);
        }
    }

    int k;
    scanf("%d", &k);
    k--;
    printf("Kode Dosen: %s\n", lecturers[k].code);
    printf("Nama Dosen: %s\n", lecturers[k].name);
    printf("Gender Dosen: %s\n", lecturers[k].gender);
    printf("Jumlah Mahasiswa: %d\n", lecturers[k].n_students);
    for (int i = 0; i < lecturers[k].n_students; i++)
    {
        printf("Kode Mahasiswa: %s\n", lecturers[k].students[i].code);
        printf("Nama Mahasiswa: %s\n", lecturers[k].students[i].name);
        printf("Gender Mahasiswa: %s\n", lecturers[k].students[i].gender);
        printf("Nama Ayah: %s\n", lecturers[k].students[i].father_name);
        printf("Nama Ibu: %s\n", lecturers[k].students[i].mother_name);
        printf("Jumlah Saudara Kandung: %d\n", lecturers[k].students[i].siblings);
    }

    return 0;
}