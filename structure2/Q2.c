/*Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no.*/
/*
 PRN - 23610087
 Name - Rajvardhan patil.
*/
#include<stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int age;
};


int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter roll no., name, and age for student %d: ", i + 1);
        scanf("%d %s %d", &students[i].rollNo, students[i].name, &students[i].age);
    }

    printf("\nDetails of all student:\n"); 
    for(int i = 0; i<5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll no.: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
    }
    

    return 0;
}