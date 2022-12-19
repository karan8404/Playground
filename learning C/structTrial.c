// program to make an array of student structure
// name should be less than 50 characters long
#include <stdio.h>

struct student
{
    int roll;
    long univRoll;
    char name[50];
};

void inputStudent(struct student *s)
{
    printf("Enter student roll\n");
    scanf("%d", &s->roll);

    printf("Enter student University roll\n");
    scanf("%d", &s->univRoll);

    printf("Enter student name\n");
    scanf(" %[^\n]s", &s->name); // %[^\n]s. whitespace to omit all whitespaces.
}

void printStudent(struct student *s)
{
    printf("Class Roll no: %d\n", s->roll);
    printf("University Roll no: %d\n", s->univRoll);
    printf("Name: %s\n", s->name);
}

void main()
{
    struct student s1 = {66, 118, "Karan Kawathia"};
    printStudent(&s1);
    int n;
    printf("Enter the number of students\n");
    scanf("%d", &n);

    struct student students[n];

    for (int i = 0; i < n; i++)
    {
        inputStudent(&students[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printStudent(&students[i]);
    }
}
