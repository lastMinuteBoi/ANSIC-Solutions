// 3.15 Write a program to read three values using scanf statement and print the following results:

// (a) Sum of the values
// (b) Average of the three values
// (c) Largest of the three
// (d) Smallest of the three

#include <stdio.h>
int main() {
    int sumFunction(int a, int b, int c);
    float avgFunction(float a, float b, float c);
    int largestFunction(int a, int b, int c);
    int smallestFunction(int a, int b, int c);
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Sum is %d\n", sumFunction(x,y,z));
    printf("Average is %.2f\n", avgFunction(x,y,z));
    printf("Largest is %d\n", largestFunction(x,y,z));
    printf("Smallest is %d\n", smallestFunction(x,y,z));
}

int sumFunction(int a, int b, int c) {
    return a+b+c;
}

float avgFunction(float a, float b, float c) {
    return (a+b+c)/3;
}
int largestFunction(int a, int b, int c) {
    return (a>b)?((a>c)?a:c):((b>c)?b:c);
}
int smallestFunction(int a, int b, int c) {
    return (a<b)?((a<c)?a:c):((b<c)?b:c);
}

