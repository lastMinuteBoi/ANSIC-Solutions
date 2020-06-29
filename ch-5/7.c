// Shown below is a Floyd's triangle 

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// .. 
// .. 
// 79 ........ 91

// (a) Write a program to print this triangle
// (b) Modify the program to produce the following form of Floyd's triangle 

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include <stdio.h>
int main() {
    // First answer
    int k = 0;
    for(int i = 0; i < 13; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%02d ", ++k);
        }
        printf("\n");
    }
    printf("\n\n");
    // Second answer
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j <= i; j++) {
            if((i+j)%2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}