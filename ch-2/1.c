// 2.1 Write a program to determine and print the sum of the following harmonic series for a given value of n:

// 1 + 1/2 + 1/3 + ... + 1/n

#include <stdio.h>
int main() {
    int n;
    float sum = 0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    if(n > 0) {
        for(int i = 1; i <= n; i++) {
            sum += 1.0/i; 
        }
        printf("Sum is %.2f\n", sum);
    } else {
        printf("Enter a positive integer\n");
    }
} 