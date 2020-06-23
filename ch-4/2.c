// 4.2 Write a program to read the values of x and y and print the results of the following expressions in one line:

// (a) (x+y)/(x-y)    
// (b) (x+y)/2
// (c) (x+y)(x-y)

#include <stdio.h>
int main() {
    float x, y, a, b, c;
    printf("Enter x and y: ");
    scanf("%f %f", &x, &y);
    if(x == y) {
        printf("Some values will have 0 denomination\n");
    } else {
        a = (x+y)/(x-y);
        b = (x+y)/2;
        c = (x+y)*(x-y);
        printf("%.2f %.2f %.2f\n", a, b, c);
    }
}