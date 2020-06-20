// 1.12 A point on the circumference of a circle whose centre is (0, 0) is (4,5). Write a program to compute perimeter and area of the circle. 

#include <stdio.h>
#include <math.h>
#define PI 3.1416
int main() {
    float radius, perimeter, area;
    radius = sqrt(4*4 + 5*5);
    perimeter = 2*PI*radius;
    area = PI*radius*radius;
    printf("Perimeter is %.2f\nArea is %.2f\n", perimeter, area);
}   