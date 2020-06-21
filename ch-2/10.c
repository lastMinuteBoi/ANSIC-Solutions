// 2.10 Write a program to illustrate the use of symbolic constants in a real life application

#include <stdio.h>
#define PI 3.1416
int main() {
    float radius, area;
    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);
    area = 2*PI*radius;
    printf("Area of the circle is: %.2f\n", area);
}