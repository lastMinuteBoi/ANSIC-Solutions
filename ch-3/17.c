// 3.17 Write a program to print a table of sin and cos functions for the interval from 0 to 180 degrees in increments of 15

#include <stdio.h>
#include <math.h>
#define PI 3.1416
#define MAX 180
int main() {
    float x;
    printf("\nx(degrees)\t\t  sin(x)\t\t\t  cos(x)\n\n");
    for(int i = 0; i <= MAX; i += 15) {
        x = (PI/MAX)*i;
        printf("%3d\t\t\t%8.4f\t\t\t%8.4f\n", i, sin(x), cos(x));
    }
}