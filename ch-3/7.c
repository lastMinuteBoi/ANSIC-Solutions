// 3.7 Write a program that will read a real number from the keyboard and print the following output in one line

// (a) Smallest integer not less than the number
// (b) The given number
// (c) Largest integer not greater than the number

#include <stdio.h>
int main() {
    float number;
    int smallInt, largeInt;
    printf("Enter the real number: ");
    scanf("%f", &number);
    smallInt = (int) number;
    largeInt = smallInt + 1;
    printf("%d %f %d\n", smallInt, number, largeInt);
}