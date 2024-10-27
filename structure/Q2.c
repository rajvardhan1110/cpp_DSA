#include<stdio.h>
#include<string.h>

struct stu{
    int roll;
    char name[10];
    int age;
}s[5];

int main(){
    for(int i=0; i<5; i++){
        s[i].roll= i+1;
        printf("enter name of student %d\n",i+1);
        fgets(s[i].name,10,stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0'; 
        printf("enter an age of student %d\n",i+1);
        scanf("%d",&s[i].age);

        printf("roll number of student %d is %d\n",i+1,s[i].roll);
        printf("name of student %d is %s\n",i+1,s[i].name);
        printf("age of student%d is%d \n \n",i+1,s[i].age);
    }

 return 0;
}