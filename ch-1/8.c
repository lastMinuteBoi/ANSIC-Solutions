// 1.8 Given the values of three variables a, b and c, write a program to compute and display the value of x, where

// x = a / (b-c)

// Execute your program for the following values:
// (a) a = 250, b = 85, c = 25
// (b) a = 300, b = 70, c = 70
// Comment on the output of each case

#include <stdio.h>
int main() {
    int a, b, c;
    float x;
    printf("Enter the 3 values: ");
    scanf("%d %d %d", &a, &b, &c);
    if((b-c) != 0) {
        // Float is explicitly stated before (b-c) to make its value a floating point since b,c is int type and x is floating type. Remember a floating type variable in any expression will make the whole exp floating type.
        x = a / (float)(b-c);
        printf("x = %.2f\n", x);
    } else {
        printf("Denomination 0 can't be possible\n");
    }
}