// 1.7 Given two integers 20 and 10, write a program that uses a function add() to add these two numbers and sub() to find the difference of these two numbers and then display the sum and difference in the following form:

// 20 + 10 = 30
// 20 - 10 = 10

#include <stdio.h>
int main() {
    // Function prototype
    int add(int a, int b);
    int sub(int c, int d);
    // variable Declaration
    int e, f, addValue, subValue;
    // Input 2 numbers via terminal 
    scanf("%d %d", &e, &f);   
    // Value returned from the functions
    addValue = add(e,f);
    subValue = sub(e,f);
    // Print the results
    printf("%2d + %2d = %2d\n", e, f, addValue);
    printf("%2d - %2d = %2d\n", e, f, subValue);
}

// Functions
int add(int a, int b) {
    return a+b;
}
int sub(int c, int d) {
    return c-d;
}