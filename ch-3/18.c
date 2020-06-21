// 3.18 Write a program to compute the values of square roots and squares of the numbers 0 to 100 in steps of 10 and print the output in a tabular form 

#include <stdio.h>
#include <math.h>
int main() {
    printf("\nNumber\t\t\tSquare-root\t\tSquare\n\n");
    for(int i = 0; i <= 100; i += 10) {
        printf("%3d\t\t\t  %5.2f\t\t\t%5d\n", i, sqrt(i), i*i);
    }
}