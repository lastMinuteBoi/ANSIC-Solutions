// 3.12 Write a program to print the size of various data types in C 

#include <stdio.h>
int main() {
    printf("%3lu bits\n", sizeof(char)*8);
    printf("%3lu bits\n", sizeof(short int)*8);
    printf("%3lu bits\n", sizeof(int)*8);
    printf("%3lu bits\n", sizeof(float)*8);
    printf("%3lu bits\n", sizeof(long)*8);
    printf("%3lu bits\n", sizeof(double)*8);
    printf("%lu bits\n", sizeof(long double)*8);
}