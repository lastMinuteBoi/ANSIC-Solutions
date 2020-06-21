// 2.4 Write a program that requests two float type numbers from the user and then divides the first number by the second and display the result along with the numbers

#include <stdio.h>
int main() {
    float first, second;
    printf("Enter two float type numbers: ");
    scanf("%f %f", &first, &second);
    printf("Result is %.2f\n", first/second);
    printf("The numbers are %.2f %.2f\n", first, second);
}