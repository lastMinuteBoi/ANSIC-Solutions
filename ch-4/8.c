// 4.8 Write a program to print the value 345.6789 in fixed point format with the following specifications:
// (a) correct to two decimal places
// (b) correct to five decimal places
// (c) correct to zero decimal places

#include <stdio.h>
int main() {
    float number;
    scanf("%f", &number);
    printf("%.2f\n%.5f\n%d\n", number, number, (int)number);
}