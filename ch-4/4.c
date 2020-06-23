// 4.4 Write a program that reads 4 floating point values in the range 0.0 to 20.0, and prints a horizontal bar chart to represent these values using the character * as the fill character. For the purpose of the chart, the values may be rounded off to the nearest integer. For example the value 4.36 should be represented as follows. 

// *   *   *   *   4.36

// Note that the actual values must be shown at the end of the bar

#include <stdio.h>
#include <math.h>
int main() {
    float arr[4];
    for(int i = 0; i < 4; i++) {
        scanf("%f", &arr[i]);
    }
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < (int)roundf(arr[i]); j++) {
            printf("*  ");
        }
        printf("%f\n", arr[i]);
    }
}
