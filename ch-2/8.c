// 2.8 Write a program to read two floating point numbers using the scanf statement, assign their sum to an integer variable and then output the values of all the three variables

#include <stdio.h>
int main() {
    float one, two;
    int three;
    printf("Enter two floating point numbers: ");
    scanf("%f %f", &one, &two);
    three = one + two;
    printf("one = %.2f\ntwo = %.2f\nthree = %d\n", one, two, three);
}