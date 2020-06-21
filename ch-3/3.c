// 3.3 Modify the above program to display the two rightmost digits of the integral part of the number 

#include <stdio.h>
int main() {
    float number;
    int result;
    printf("Enter the floating point number: ");
    scanf("%f", &number);
    result = ((int)number)%100;
    printf("Result is: %d\n", result);
}