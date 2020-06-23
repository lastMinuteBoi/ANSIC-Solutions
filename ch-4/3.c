// 4.3 Write a program to read the following numbers, round them off to the nearest integers and print out the results in integer form:

// 35.7   50.21   -23.73   -46.45

#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d;
    int ra, rb, rc, rd;
    printf("Enter numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    ra = (int)roundf(a);
    rb = (int)roundf(b);
    rc = (int)roundf(c);
    rd = (int)roundf(d);
    printf("%d %d %d %d\n", ra, rb, rc, rd);
}