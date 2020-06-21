// 2.2 Write a program to read the price of an item in decimal form (like 15.95) and print the output in paise(like 1595 paise)

#include <stdio.h>
int main() {
    float price;
    printf("Enter price of the item: ");
    scanf("%f", &price);
    printf("%.2f paise\n", price*100);
}