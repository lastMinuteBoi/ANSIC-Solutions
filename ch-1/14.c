// 1.14 Write a program to display the equation of a line in the form

// ax + by = c

// for a = 5, b = 8 and c = 18

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter the value a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("%dx + %dy = %d\n", a, b, c);
}