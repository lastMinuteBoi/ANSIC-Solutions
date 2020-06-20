// 1.13 The line joining the points (2,2) and (5,6) which lie on the circumference of a circle is the diameter of the circle. Write a program to compute the area of the circle.

#include <stdio.h>
#include <math.h>
#define PI 3.1416
int main() {
    float diameter, radius, area;
    diameter = sqrt((5-2)*(5-2) + (6-2)*(6-2));
    radius = diameter/2.0;
    area = PI*radius*radius;
    printf("Area of the circle is %.2f\n", area);
}