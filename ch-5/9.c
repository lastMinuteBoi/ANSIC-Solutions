// 5.9 Write a program that will read the value of x and evaluate the following function 


//          1  for x > 0
//     y =  0  for x = 0
//         -1  for x < 0
// using
// (a) nested if statements
// (b) else if statements, and
// (c) conditional operator ?:

#include <stdio.h>
int main() {
    int result, x;
    printf("Enter x: ");
    scanf("%d", &x);

    // Using nested if
    if(x >= 0) {
        if(x == 0) {
            printf("y = 0\n");
        } else {
            printf("y = 1\n");
        }
    } else {
        printf("y = -1\n");
    }

    // Using if else 
    if(x < 0) {
        printf("y = -1\n");        
    } else if(x == 0) {
        printf("y = 0\n");        
    } else {
        printf("y = 1\n");        
    }

    // Using ternay operator
    result = (x >= 0)?((x == 0)?0:1):-1;   
    printf("y = %d\n", result);
}