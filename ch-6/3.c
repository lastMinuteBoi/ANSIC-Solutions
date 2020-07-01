// 6.3 Write a program to compute the sum of the digits of a given integer number

// 12345 = 1+2+3+4+5

#include <stdio.h>
int main() {
    int m, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &m);
    while(m != 0) {
        sum += m%10;
        m /= 10;
    }
    printf("Sum is %d\n", sumFunc(m));

}

// Can also use this recursive function. To use this don't forget to prototype this above

// int sumFunc(int m) {
//     if(m == 0) {
//         return 0;
//     }
//     return m%10 + sumFunc(m/10);
// }