// 3.1 Given the values of the variable x, y and z, write a program to rotate their values such that x has the value of y, y has the value of z, and z has the value of x

#include <stdio.h>
int main() {
    // Function prototype
    void firstMethodRotation();
    void secondMethodRotation();
    void thirdMethodRotation();
    // Calling the function
    firstMethodRotation();
    secondMethodRotation();
    thirdMethodRotation();
}

// Use any of the one methods you like to use. Delete or comment out the rest.

// Using temp variable
void firstMethodRotation() {
    int x, y, z, temp;
    printf("Enter x,y,z: ");
    scanf("%d %d %d", &x, &y, &z);
    temp = x;
    x = y;
    y = z;
    z = temp;
    printf("New value of x,y,z: %d %d %d\n", x, y, z);
}

// Using addition method
void secondMethodRotation() {
    int x, y, z;
    printf("Enter x,y,z: ");
    scanf("%d %d %d", &x, &y, &z);
    x = x+y+z;
    z = x - (y+z);
    y = x - (y+z);
    x = x - (y+z); 
    printf("New value of x,y,z: %d %d %d\n", x, y, z);
}

// Using bitwise OR operator
void thirdMethodRotation() {
    int x, y, z;
    printf("Enter x,y,z: ");
    scanf("%d %d %d", &x, &y, &z);
    x = x^y^z;
    z = x^y^z;
    y = x^y^z;
    x = x^y^z; 
    printf("New value of x,y,z: %d %d %d\n", x, y, z);
}