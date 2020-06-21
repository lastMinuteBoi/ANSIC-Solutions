// 3.11 Write a program to read a four digit integer and print the sum of the digits

#include <stdio.h>
int main() {
    int number, sum = 0;
    printf("Enter a 4 digit number: ");
    scanf("%4d", &number);
    while(number != 0) {
        sum += (number % 10);
        number /= 10;
    }
    printf("Sum is %d\n", sum);
}