// 3.13 Given three values, write a program to read three values from keyboard and print out the largest of them without using if statement

#include <stdio.h>
int main() {
    int a, b, c, result;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    result = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Largest is %d\n", result);
}
