// 5.3 A set of two linear equations with two unknows x1 and x2 is given below:

// ax1 + bx2 = m
// cx1 + dx2 = n

// The set has a unique solution

// x1 = (md - bc)/(ad - cb)
// x2 = (na - mc)/(ad - cb)

// provided the denominator ad - cb is not equal to zero. Write a program that will read the values of connstants a,b,c,d,m,n and compute the values x1, x2. An appropriate message should be printed if ad - cb = 0.

#include <stdio.h>
int main() {
    float a, b, c, d, m, n, x1, x2, num, den;
    printf("Enter a, b, c, d, m, n: ");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &m, &n);
    den = a*d - c*b;
    if(den == 0) {
        printf("Denominator is zero\n");
    } else {
        x1 = (m*d - b*c)/den;
        x1 = (n*a - m*c)/den;
        printf("x1 and x2 is %.2f %.2f\n", x1, x2);
    }
}