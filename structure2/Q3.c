/*Write a program to store and print the roll no., name, age, address and marks of 15 students using structure.*/
/*
 PRN - 23610087
 Name - Rajvardhan Patil
*/

#include<stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int age;
    char address[100];
    int marks[5];
};

int main() {
    struct Student students[15];

    // Input data for each student
    for (int i = 0; i < 15; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No.: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Address: ");
        scanf("%s", students[i].address);
        printf("Marks (5 subjects): ");
        for (int j = 0; j < 5; j++) {
            scanf("%d", &students[i].marks[j]);
        }
    }

    // Printing the stored data
    printf("\nStudent Details:\n");
    for (int i = 0; i < 15; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No.: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Address: %s\n", students[i].address);
        printf("Marks (5 subjects): ");
        for (int j = 0; j < 5; j++) {
            printf("%d ", students[i].marks[j]);
        }
        printf("\n");
    }
}