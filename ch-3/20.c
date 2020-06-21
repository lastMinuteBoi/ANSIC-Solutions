// 3.20 Write a program to illustrate the use of cast operator in a real life situation

#include <stdio.h>
int main() {
    float number;
    printf("Enter a floating number to get the int part: ");
    scanf("%f", &number);
    printf("The int part is %d\n", (int)number);
}