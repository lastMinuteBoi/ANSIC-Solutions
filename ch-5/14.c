// 5.14 Write an interactive program that could read a positive integer number and decide whether the number is a prime number and display the output accordingly. Modify the program to flag all the prime numbers that lie between 100 and 200

#include <stdio.h>
#include <math.h>
int isPrime(int number);
void printPrime(int start, int end);

int main() {
    int number, flag, start, end;
    printf("Enter number to check for prime: ");
    scanf("%d", &number);
    flag = isPrime(number);
    if(flag == 0) printf("NOT Prime\n");
    else printf("Prime\n");
    printf("Enter two numbers b/w which prime numbers are to be found: ");
    scanf("%d %d", &start, &end);
    printPrime(start, end);
}

int isPrime(int number) {
    int flag = 1;
    for(int i = 2; i <= sqrt(number); i++) {
        if(number%i == 0) {
            flag = 0;
            return flag;
        }
    }
    return flag;
}

void printPrime(int start, int end) {
    int count = 0, flag = 0;
    for(int i = start; i <= end; i++) {
        flag = isPrime(i);
        if(flag == 0) continue;
        else {
            count++;
            printf("%d ", i);
        }
    }
    printf("\n");
}