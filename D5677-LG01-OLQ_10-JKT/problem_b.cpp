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
    char name[101];
    char nim[10];
    int age;
    char postal_code[7];
    char place_of_birth[101];
    char date_of_birth[101];
    char highschool[101];
    int siblings;
    int height;
    char bank_acc_number[10];
} student_t;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        student_t students;
        scanf("%s", students.name);
        scanf(" %s", students.nim);
        scanf(" %d", &students.age);
        scanf(" %s", students.postal_code);
        scanf(" %s", students.place_of_birth);
        scanf(" %s", students.date_of_birth);
        scanf(" %[^\n]", students.highschool);
        scanf(" %d", &students.siblings);
        scanf(" %d", &students.height);
        scanf(" %s", students.bank_acc_number);

        printf("Mahasiswa ke-%d:\n", i + 1);
        printf("Nama: %s\n", students.name);
        printf("NIM: %s\n", students.nim);
        printf("Umur: %d\n", students.age);
        printf("Kode Pos: %s\n", students.postal_code);
        printf("Tempat Lahir: %s\n", students.place_of_birth);
        printf("Tanggal Lahir: %s\n", students.date_of_birth);
        printf("Almamater SMA: %s\n", students.highschool);
        printf("Jumlah Saudara Kandung: %d\n", students.siblings);
        printf("Tinggi Badan: %d\n", students.height);
        printf("NOMOR REKENING: %s\n", students.bank_acc_number);
    }

    return 0;
}