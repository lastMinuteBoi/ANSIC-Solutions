// 1.6 Write a program to output the following multiplication table:

// 5 * 1 = 5
// 5 * 2 = 10
// 5 * 3 = 15
// . .
// . .
// 5 * 10 = 50

#include <stdio.h>
int main() {
    for(int i = 1; i <= 10; i++) {
        printf("5 * %2d = %2d\n", i, 5*i);
    }
}