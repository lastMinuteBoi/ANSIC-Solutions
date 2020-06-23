// 4.10 Write a program to read and display the following table of data.

// Name                    Code                        Price
// Fan                     67831                       1234.50
// Motor                   450                         5786.70

 // The name and code must be left-justified and price must be right justified

#include <stdio.h>
int main() {
    char name[2][10];
    int code[2];
    float price[2];
    for(int i = 0; i < 2; i++) {
        scanf("%s %d %f", name[i], &code[i], &price[i]);
    }
    printf("\nName\t\tCode\t\t  Price\n");
    for(int i = 0; i < 2; i++) {
        printf("%-s\t\t%-d\t\t%8.2f\n", name[i], code[i], price[i]);
    }
}