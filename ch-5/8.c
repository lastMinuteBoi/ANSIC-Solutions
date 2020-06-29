// 5.8 A cloth showroom has announced the following seasonal discounts on purchase of items: 

// Purchase amount                                                 Discount

//                                             Mill cloth                    Handloom items
//   0 - 100                                       -                               5%
// 101 - 200                                       5%                              7.5%
// 201 - 300                                       7.5%                            10.0 %
// Above 300                                       10.0 %                          15.0%

// Write a program using switch and if statements to compute the net amount to be paid by the customer

#include <stdio.h>
int main() {
    float mill, handloom, total;
    printf("Enter purchase amount for mill cloth and handloom cloth seperately: ");
    scanf("%f %f", &mill, &handloom);
    total = mill + handloom;
    if(total >= 0 && total <= 100) {
        total = mill + 0.95*handloom;
    } else if(total > 100 && total <= 200) {
        total = .95*mill + .925*handloom;
    } else if(total > 200 && total <= 300) {
        total = .925*mill + .90*handloom;
    } else if(total > 300) {
        total = .90*mill + .85*handloom;
    } else {
        printf("Enter correct input\n");
    }
    printf("Net amount is Rs %.2f\n", total);
}