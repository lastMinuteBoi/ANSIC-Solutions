// 3.9 In inventory management, the Economic Order Quantity for a single item is given by

// EOQ = sqrt((2*demand rate*setup costs)/(holding cost per item unit time))

// and the optimal time between orders

// TBO = sqrt((2*setup costs)/(demand rate*holding cost per item per unit time))

// Write a program to compute EOQ and tBO, given demand rate(items per unit time), setup costs(per order), and the holding cost(per item per unit time).

#include <stdio.h>
#include <math.h>
int main() {
    float dr, sc, hc, eoq, tbo;
    printf("Enter demand rate: ");
    scanf("%f", &dr);
    printf("Enter setup cost: ");
    scanf("%f", &sc);
    printf("Enter holding cost: ");
    scanf("%f", &hc);
    eoq = sqrt((2*dr*sc)/hc);
    tbo = sqrt((2*sc)/(dr*hc));
    printf("EOQ is %.2f\nTBO is %.2f\n", eoq, tbo);
}