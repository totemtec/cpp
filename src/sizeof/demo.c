#include <stdio.h>

typedef struct date
{
    int year;
    int month;
    int day;
} DATE;

typedef struct student
{
    long studentID;
    char studentName[10];
    char studentSex;
    DATE birthday;
    int score[4];
} STUDENT;

STUDENT xiaoming;

typedef struct person
{
    int id;
    char sex;
    int *birthday;
} PERSON;

PERSON zhangsan;

int main()
{
    printf("%d\n", sizeof(xiaoming));
    printf("sizeof(DATE) = %d\n", sizeof(DATE));

    printf("sizeof(DATE*) = %d\n", sizeof(DATE*));

    printf("sizeof(PERSON) = %d\n", sizeof(PERSON));

    printf("sizeof(char) = %d\n", sizeof(char));

    printf("sizeof(char*) = %d\n", sizeof(char*));
}