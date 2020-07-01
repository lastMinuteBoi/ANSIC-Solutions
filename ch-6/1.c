// 6.1 Given a number, write a program using while loop to reverse the digit of the number. For example, the number 

// 12345 should be written as 54321

#include <stdio.h>
int main() {
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    do {
        printf("%d", number%10);
        number /= 10;
    } while(number != 0);
    printf("\n");
}