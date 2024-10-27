/*Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.*/
/*
 PRN - 23610087
 Name - Rajvardhan Patil

*/

#include<stdio.h>

struct Marks {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    int total_marks;
    float percentage;
    
};

void calculate(struct Marks *studetn) {
    studetn->total_marks = studetn->chem_marks + studetn->maths_marks + studetn->phy_marks;
    studetn->percentage = (studetn->total_marks / 300) * 100;
}

int main() {

    struct Marks students[5];

    for(int i =0; i<5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Chemistry Marks: ");
        scanf("%d", &students[i].chem_marks);
        printf("Maths Marks: ");
        scanf("%d", &students[i].maths_marks);
        printf("Physics Marks: ");
        scanf("%d", &students[i].phy_marks);
        calculate(&students[i]);
    }

    printf("\nStudent Details:\n");
    for(int i =0; i<5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        printf("%d", students[i].roll_no);
        printf("\nName: ");
        printf("%s", students[i].name);
        printf("\nChemistry Marks: ");
        printf("%d", students[i].chem_marks);
        printf("\nMaths Marks: ");
        printf("%d", students[i].maths_marks);
        printf("\nPhysics Marks: ");
        printf("%d", students[i].phy_marks);   
        printf("\npercentage: ");
        printf("%f", students[i].percentage);   

    }
}