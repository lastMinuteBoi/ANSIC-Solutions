// 2.7 Write a program to do the following:

// (a) Declare x and y as integer variables and z as a short integer variable
// (b) Assign two 6 digit numbers to x and y
// (c) Assign the sum of x and y to z
// (d) Output the values of x, y and z
// Comment on the output

#include <stdio.h>
int main() {
    int x, y;
    short int z;
    x = 123456;
    y = 654321;
    z = x + y;
    printf("x = %d\ny = %d\nz = %d\n", x, y, z);
    //Short int is 16 bits signed. So it can hold values upto (2^16)/2 - 1 i.e upto 32, 767, while x+y = 777,777.
}