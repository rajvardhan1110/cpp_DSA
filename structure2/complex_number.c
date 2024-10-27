/*Write a program to add, subtract and multiply two complex numbers using structures to function*/
/*
 PRN - 23610062
 Name - Dhanraj Jadhav
*/

#include <stdio.h>

struct complex{
    float real;
    float imag;
};

struct complex addcomplex(struct complex a, struct complex b){
    struct complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
    
}

struct complex subtractcomplex(struct complex a, struct complex b){

    struct complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;  
}

struct complex multiplycomplex(struct complex a, struct complex b){
    struct complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;

}
int main () {
    struct complex num1, num2, sum, diff, prod;
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    sum = addcomplex(num1, num2);
    printf("Sum of complex numbers: %.2f + %.2fi\n", sum.real, sum.imag);

    diff = subtractcomplex(num1, num2);
    printf("Difference of complex numbers: %.2f + %.2fi\n", diff.real, diff.imag);

    prod = multiplycomplex(num1, num2);
    printf("Product of complex numbers: %.2f + %.2fi\n", prod.real, prod.imag);

    return 0;

}