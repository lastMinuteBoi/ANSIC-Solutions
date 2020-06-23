// 4.5 Write an interactive program to demonstrate the process of multiplication. The program should ask the user to enter two two-digit integers and print the product of integers as shown below

//                                      45
//                                    * 37
//                                   -------
//         7*45 is                     315
//         3*45 is                    135
//                                   -------           
//         Add them                   1665

#include <stdio.h>
int main() {
    int number1, number2;
    printf("Enter two 2 digit number: ");
    scanf("%d %d", &number1, &number2);
    printf("\t\t\t\t   %d\n", number1);
    printf("\t\t\t\t*  %d\n", number2);
    printf("\t\t\t\t--------\n");
    printf("%d*%d is \t\t\t  %d\n", number2%10, number1, number1*(number2%10));
    printf("%d*%d is \t\t\t %d\n", number2/10, number1, number1*(number2/10));
    printf("\t\t\t\t--------\n");
    printf("Add them\t\t\t %d\n\n", number1*number2);
}