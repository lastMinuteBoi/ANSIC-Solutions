// 3.6 The straight line method of computing the yearly depreciation of the values of an item is given by

// Depreciation = (Purchase Price - salvage Price) / Years of Service

// Write a program to determine the salvage value of an item when the purchase price , years of service, and the annual depreciation is given

#include <stdio.h>
int main() {
    float dep, purchase, salvage;
    int yos;
    printf("Enter purchase price, depreciation and years: ");
    scanf("%f %f %d", &purchase, &dep, &yos);
    salvage = purchase - (dep*yos);
    printf("Salvage price is %.2f\n", salvage);
}