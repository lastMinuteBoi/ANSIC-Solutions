// 3.14 Write a program to read two integer values m and n and to decide and print whether m is a multiple of n

#include <stdio.h>
int main() {
    int m, n;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);
    if((m%n) == 0) {
        printf("m is a multiple of n\n");
    } else {
        printf("m is NOT a multiple of n\n");
    }
}