//  5.6 Write a program to print a 2D square root table to provide the square root of any number from 0 to 9.99. For example, the value x will give the square root of 3.2 and y the square root of 3.9

// Number  0.0     0.1     0.2     ......      0.9
// 0.0
// 1.0
// 2.0
// 3.0                     x                   y
// .
// .
// .
// 9.0

#include <stdio.h>
#include <math.h>
#define ROWS 10
#define COLS 1.0
int main() {
    printf("\nNumber ");
    for(float i = 0.0; i < COLS; i += 0.1) {
        printf("%4.1f\t", i);
    }
    printf("\n");
    for(float i = 0.0; i < ROWS; i++) {
        printf("%4.1f ", i);
        for(float j = 0.0; j <= COLS; j += 0.1) {
            printf("\t%.2f ", sqrt(i+j));
        }
        printf("\n");
    }
    printf("\n");
}