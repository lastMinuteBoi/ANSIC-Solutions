// 3.16 The cost of one type of mobile service if Rs. 250 plus Rs. 1.25 for each call made over and above 100 calls. Write a program to read customer codes and calls made and print the bill for each customer

#include <stdio.h>
int main() {
    int calls;
    float defaultPrice = 250, cost;
    printf("Enter the no. of calls made: ");
    scanf("%d", &calls);
    if(calls >= 0 && calls <100) {
        printf("Cost of bill is Rs. %6.2f\n", defaultPrice);
    } else if(calls >= 100) {
        cost = defaultPrice + (calls-100)*1.25;
        printf("Cost of bill is Rs. %6.2f\n", cost);
    } else {
        printf("Enter correct input\n");
    }
}