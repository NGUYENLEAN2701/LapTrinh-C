#include <stdio.h>

struct student
{
    int age;
    int grade;
    char name[40];
};

int main()
{
    /* declare two variables */
    struct student s1 = {19, 9, "John Birghimer"};
    struct student s2 = {22, 10, "Batman Jokerson"};

    printf("Student: %s, %d\n", s1.name, s1.age);
    printf("Student: %s, %d\n", s2.name, s2.age);

    return 0;
}