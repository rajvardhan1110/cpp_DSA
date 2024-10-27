/*Write a program to store and print the roll no., name, age and marks of a student using structures. */
/*
 PRN - 23610087
 Name - Rajvardhan Patil.
*/

#include <stdio.h>

struct Students {
    int rollNo;
    char name[50];
    int age;
    int marks[5];
};

int main() {
    struct Students student;

    printf("Enter roll no.: ");
    scanf("%d", &student.rollNo);

    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter age: ");
    scanf("%d", &student.age);

    printf("Enter marks (5 subjects): ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &student.marks[i]);
    }

    printf("\nStudent Details:\n");
    printf("Roll No.: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Marks (5 subjects):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", student.marks[i]);
    }
    printf("\n");

    return 0;   
}
