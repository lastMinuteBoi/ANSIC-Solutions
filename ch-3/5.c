// 3.5 Given an integer number, write a program that displays the number as follows: 

// 5678
// 678
// 78
// 8

#include <stdio.h>
#include <math.h>
int main() {
    int lengthOfNumber(int num); //Function prototype
    int number, length;
    printf("Enter the number: ");
    scanf("%d", &number);
    length = lengthOfNumber(number);
    
    //Modulus operation
    for(int i = length-1; i >= 0; i--) {
        printf("%d\n", number);
        number %= (int)pow(10, i);
    }
}

//Finding the length of the number so that it could be used to divide using the modulus operator
int lengthOfNumber(int num) {
    int count = 0;
    while(num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

