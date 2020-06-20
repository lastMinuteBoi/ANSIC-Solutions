// 1.5 Given the radius of a circle, write a program to compute and display its area. Use a symbolic constant to define the pi value and assume a suitable value for radius.

#include <stdio.h>
#define PI 3.1416
int main() {
    float area, radius;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius); // Enter radius in terminal
    area = PI*radius*radius;
    printf("Area is %.2f\n", area);
}
