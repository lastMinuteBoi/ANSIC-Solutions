// 2.9 Write a program to illustrate the use of typedef declation in a program

#include <stdio.h>
int main() {
    typedef int scores;
    scores math, physics, chemistry, total;
    printf("Enter math marks: ");
    scanf("%d", &math);
    printf("Enter physics marks: ");
    scanf("%d", &physics);
    printf("Enter chemistry marks: ");
    scanf("%d", &chemistry);
    total = math + physics + chemistry;
    printf("Total marks are: %d\n", total);
}