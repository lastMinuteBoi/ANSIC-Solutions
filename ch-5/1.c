// 5.1 Write a program to determine whether a given number is 'odd' or 'even' and print the message
// NUMBER IS EVEN
// or
// NUMBER IS ODD

// (a) without using else option, and
// (b) with else option

#include <stdio.h>
void withoutElse(int num);
void withElse(int num);
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    withoutElse(number);
    withElse(number);
}


void withoutElse(int num) {
    if((num % 2) == 0) {
        printf("NUMBER IS EVEN\n");
    }
    if((num % 2) != 0) {
        printf("NUMBER IS ODD\n");
    }
}

void withElse(int num) {
    if((num % 2) == 0) {
        printf("NUMBER IS EVEN\n");
    } else {
        printf("NUMBER IS ODD\n");
    }
}