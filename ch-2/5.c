// 2.5 The price of 1 kg of rice is Rs. 16.75 and one kg of sugar is Rs. 15. Write a program to get these values from the user and display the prices as follows:

// ***LIST OF PRICES***
// Item       Price
// Rice       Rs. 16.75
// Sugar      Rs. 15.00

#include <stdio.h>
int main() {
    float rice, sugar;
    printf("Enter price of Rice: ");
    scanf("%f", &rice);
    printf("Enter price of Sugar: ");
    scanf("%f", &sugar);
    printf("***LIST OF PRICES***\n");
    printf("Item\t\t  Price\n");
    printf("Rice\t\tRs. %.2f\n", rice);
    printf("Sugar\t\tRs. %.2f\n", sugar);
}