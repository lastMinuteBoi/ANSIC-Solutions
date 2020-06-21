// 3.2 Write a program that reads a floating point number and then displays the right most digit of the integral part of the number

#include <stdio.h>
int main() {
    float number;
    int result;
    printf("Enter the floating point number: ");
    scanf("%f", &number);
    result = ((int)number)%10; //First floating pointing no is converted into int, then modulus is taken.
    printf("Result is: %d\n", result);
}