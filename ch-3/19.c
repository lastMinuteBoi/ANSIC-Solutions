// 3.19 Write a program that determine whether a given integer is odd or even and displays the number and description on the same line

#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number%2 == 0) {
        printf("%d Even\n", number);
    } else {
        printf("%d Odd\n", number);
    }
}