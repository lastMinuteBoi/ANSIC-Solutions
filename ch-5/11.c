// 5.11 Write a program to read three integer values from the keyboard and display the output stating if they are the sides of a right angled triangle

#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, largest;
    printf("Enter sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    largest = (a>b)?((a>c)?a:c):((b>c)?b:c);
    if(largest == a) {
        if(a == sqrt(b*b + c*c)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    } else if(largest == b) {
        if(b == sqrt(a*a + c*c)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    } else if(largest == c) {
        if(c == sqrt(a*a + b*b)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
}