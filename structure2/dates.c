/*Write a program to compare two dates entered by user. Make a structure named Date to store the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".*/
/*
 PRN - 23610062
 Name - Dhanraj Jadhav
*/


#include<stdio.h>

struct date {
    int day;
    int month;
    int year;
};

void check_date(struct date date1, struct date date2) {

    printf("Enter date 1 (DD MM YYYY): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter date 2 (DD MM YYYY): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year) {
        printf("Dates are equal\n");
    } else {
        printf("Dates are not equal\n");
    }

    return;
}


int main() {

    struct date date1, date2;
    check_date(date1, date2);


    return 0;
}
