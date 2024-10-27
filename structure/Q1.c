#include <stdio.h>
#include <string.h>
struct student{
    int roll_no;
    char name[10];
    int age;
    int marks;
    };

int main(){
    struct student s1;
    s1.roll_no=5;
    strcpy(s1.name,"Ravi");
    s1.age=19;
    s1.marks=89;

    printf("roll number of s1 is %d\n",s1.roll_no);
    printf("name of student s1 is %s\n",s1.name);
    
    printf("age of student s1 is %d\n",s1.age);
    printf("marks of student of s1 is %d\n",s1.marks);

    return 0;
}