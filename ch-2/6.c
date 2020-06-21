// 2.6 Write a program to count and print the number of negative and positive numbers in a given set of numbers. Test your program with a suitable set of numbers. Use scanf to read the numbers. Reading should be terminated when the value of 0 is encountered.

#include <stdio.h>
int main() {
    int number, pos = 0, neg = 0;
    printf("Enter the values: ");
    do {
        scanf("%d", &number);
        if(number > 0) pos++;
        else if(number < 0) neg++;
    } while(number != 0);
    printf("Positive numbers are: %d\n", pos);
    printf("Negative numbers are: %d\n", neg);
}