// 1.9 Relationship between Celcius and Fahrenheit is governed by the formula

// F = 9C/5 + 32

// Write a program to convert the temperature

// (a) from Celcius to Fahrenheit and
// (b) from Fahrenheit to Celcius

#include <stdio.h>
int main() {
     char ch;
     float temp, fah, cel;
     printf("Enter c or f for input temperature, followed by degree temp of same for conversion\n");
     scanf("%c %f", &ch, &temp);
     if(ch == 'c' || ch == 'C') {
         fah = (9*temp)/5.0 + 32;
         printf("Temperature in Fahrenheit is %.2f\n", fah);
     } else if(ch == 'f' || ch == 'F') {
         cel = (temp-32)*(5/9.0);
         printf("Temperature in Celcius is %.2f\n", cel);
     } else {
         printf("Wrong input\nEnter correct input");
     }
}