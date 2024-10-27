/*Write a structure to store the name, account number and balance of customers (more than 10) and store their information.

Write a function to print the names of all the customers having balance less than $200.
Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.*/

/*
 PRN - 23610062
 Name - Dhanraj Jadhav
*/

#include<stdio.h>

struct bank {
    char name[100];
    int account_number;
    float balance;  
};

void balance(struct bank a[],int count) {
    for(int i = 0; i < count; i++) {
        if(a[i].balance < 200) {
            printf("%s\n", a[i].name);
        }
    }
}

void increment(struct bank a[], int count) {
    for(int i = 0; i < count; i++) {
        if(a[i].balance > 1000) {
            a[i].balance += 100;
            printf("Incremented balance of %s: %.2f\n", a[i].name, a[i].balance);
        }
    }
}
 int main() {
    struct bank BOI[10];
    for(int i = 0; i<10; i++) {
        printf("Enter name, account number and balance for customer %d\n", i+1);
        scanf("%s%d%f", BOI[i].name, &BOI[i].account_number, &BOI[i].balance);
    }

    balance(BOI, 2);
    increment(BOI, 2);

    return 0;
}