// 4.7 Write a program that prints the value 10.45678 in exponential format with the following specifications:
// (a) correct to two decimal places
// (b) correct to four decimal places
// (c) correct to eight decimal places

#include <stdio.h>
int main() {
    float number;
    scanf("%f", &number);
    printf("%.2e\n%.5e\n%.8e\n", number, number, number);
}