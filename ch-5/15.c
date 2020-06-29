// 5.15 Write a program that reads a double type value x that represents angle in radians and a character type variable T that represents the type of trigonometric function and display the value of

// (a) sin(x), if s or S is assigned to T
// (b) cos(x), if c or C is assigned to T, and
// (c) tan(x), if t or T is assigned to T

// using 

// (i) if...else statement
// (ii) switch statement

#include <stdio.h>
#include <math.h>
#define MAX 180
#define PI 3.1416
void usingIfElse(char T, double x);
void usingSwitch(char T, double x);
int main() {
    char T, c;
    double x;
    printf("Enter angle in radians: ");
    scanf("%lf", &x);
    x = (PI/MAX)*x;
    printf("Enter s/S for sin(x), c/C for cos(x) or t/T for tan(x): ");
    scanf(" %c", &T);   // Extra space before % flushes the newline character from the previous scanf
    usingIfElse(T, x);
    usingSwitch(T, x);
}

void usingIfElse(char T, double x) {
    if(T == 's' || T == 'S') {
        printf("Sin(x) = %.2lf\n", sin(x));
    } else if(T == 'c' || T == 'C') {
        printf("Cos(x) = %.2lf\n", cos(x));
    } else if(T == 't' || T == 'T') {
        printf("Tan(x) = %.2lf\n", tan(x));
    } else {
        printf("Enter valid character\n");
    }
}

void usingSwitch(char T, double x) {
    switch(T) {
        case 's':
        case 'S':
                printf("Sin(x) = %.2lf\n", sin(x));
                break;
        case 'c':
        case 'C':
                printf("Cos(x) = %.2lf\n", cos(x));
                break;
        case 't':
        case 'T':
                printf("Tan(x) = %.2lf\n", tan(x));
                break;
        default:
                printf("Enter valid character\n");
                break;
    }
}