// Write a program to compute the real roots of a quadratic equation 

// ax2 + bx + c = 0

// The roots are given by the quadratic root equations

// The program should request for the values of the constants a, b, c and print the values of x1 and x2. Use the following rules:

// (a) No solution, if both a and b are 0
// (b) There is only one root, if a = 0(x = -c/b)
// (c) There are no real roots if b2- 4ac is -ve
// (d) Otherwise there are two real roots
// Test your program with appropriate data so that all logical paths are working as per your design. Incorporate appropriate output messages. 

#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d;
    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a == 0) {
        if(b == 0) {
            printf("No solution\n");
        } else {
            printf("x = %.2f\n", -c/b);
        }
    } else {
        d = b*b - 4*a*c;
        if(d < 0) {
            printf("Imaginary roots\n");
        } else if(d == 0) {
            printf("One real root i.e x = %.2f\n", -b/(2*a));
        } else {
            printf("Two real roots i.e x1 = %.2f, x2 = %.2f\n", (-b+sqrt(d))/2*a, (-b-sqrt(d))/2*a);
        }
    }
}