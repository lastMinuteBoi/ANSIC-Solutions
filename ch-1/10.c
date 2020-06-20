// 1.10 Area of a triangle is given by the formula 

// A = sqrt(S(S-a)(S-b)(S-c))

// Where a, b, c are sides of the triangle and 2S = a+b+c. Write a program to compute the area of the triangle given by the values of a, b, c.

#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    float s, area;
    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    s = (a+b+c)/2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle is %.2f\n", area);
}