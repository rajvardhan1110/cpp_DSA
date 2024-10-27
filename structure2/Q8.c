/*Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students.

Write a function to print the names of all the students having age 14.
Write another function to print the names of all the students having even roll no.
Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).*/

/*
 PRN - 23610087
 Name - Rajvardhan Patil.
*/

#include<stdio.h>

struct student {
    int rollno;
    char name[50];
    int age;
    char address[100];

};

void printage(struct student s[], int count) {
    for(int i = 0; i<count; i++) {
        if(s[i].age ==14) {
            printf("%s ", s[i].name);
    }
    }
    
}

void printroll(struct student s[], int count) {
    for(int i = 0; i<count; i++) {
        if(s[i].rollno % 2 == 0) {
            printf("%s ", s[i].name);
        }
    }
}

void display(struct student s[], int rollno, int count) { 
    for(int i = 0; i<count; i++) {
        if(s[i].rollno == rollno) {
            printf("PRN - %d\n", s[i].rollno);
            printf("Name - %s\n", s[i].name);
            printf("Age - %d\n", s[i].age);
            printf("Address - %s\n", s[i].address);
        }
    }
}
int main() {
    struct student students[10];
    for(int i =0; i<10  ; i++) {
        printf("Enter PRN, Name, Age and Address of student %d\n", i+1);
        scanf("%d %s %d %[^\n]", &students[i].rollno, students[i].name, &students[i].age, students[i].address);
    }
    printf("\nNames of students having age 14:\n");
    printage(students, 4);
    printf("\nNames of students having even roll no.:\n");
    printroll(students, 4);
    printf("\nEnter the roll no. to display details:\n");
    int rollno;
    scanf("%d", &rollno);
    display(students, rollno, 4);

    return 0;
}