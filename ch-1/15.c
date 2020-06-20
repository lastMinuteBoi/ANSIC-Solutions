// 1.15 Write a program to display the following simple arithmetic calculator

// x = 20                                  y = 10 

// Sum = 30                                Difference = 10 

// Product = 200                            Division = 2

#include <stdio.h>
int main() {
    int sum(int, int) ;
    int diff(int, int);
    int pro(int, int);
    float div(float, float);
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("\nSum = %d\n", sum(x,y));
    printf("Difference = %d\n", diff(x,y));
    printf("Product = %d\n", pro(x,y));
    printf("Division = %.2f\n", div(x,y));
}
    int sum(int a, int b) {return a+b;}
    int diff(int a, int b) {return a-b;}
    int pro(int a, int b) {return a*b;}
    float div(float a, float b) {return a/b;}