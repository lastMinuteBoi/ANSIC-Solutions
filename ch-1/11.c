// 1.11 Distance between two points (x1,y1) and (x2,y2) is governed by the formula 

// D = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))

// Write a program to compute D given the coordinates of the program

#include <stdio.h>
#include <math.h>
int main() {
    int x1, y1, x2, y2;
    float distance;
    printf("Enter (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("Distance is : %.2f\n", distance);
}