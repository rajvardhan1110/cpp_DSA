#include<stdio.h>
#include<string.h>

struct stu{
    int roll;
    char name[10];
    int age;
    char address[50];

}s[15];

int main(){
    for(int i=0; i<15; i++){
        s[i].roll= i+1;

        printf("enter name of student %d\n",i+1);
        fgets(s[i].name,10,stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0'; 

        printf("enter an age of student %d\n",i+1);
        scanf("%d",&s[i].age);

        printf("enter an adress of student %d\n",i+1);
        fgets(s[i].address,sizeof(s[i].address),stdin);
        s[i].address[strcspn(s[i].address, "\n")] = '\0'; 

        printf("roll number of student %d is %d\n",i+1,s[i].roll);
        printf("name of student %d is %s\n",i+1,s[i].name);
        printf("age of student%d is%d \n",i+1,s[i].age);
        printf("enter address of student %s \n \n",s[i].address);
    }

 return 0;
}