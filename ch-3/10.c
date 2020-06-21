// 3.10 For a certain electrical circuit with an inductance L and resistance R, the damped natural frequency is given by

// Frequency = sqrt(1/(LC) - (R*R)/(4*C*C))

// It is desired to study the variation of this frequency with C(Capacitance). Write a program to calculate the frequency for different values of C starting from 0 to 0.1 in steps of 0.01.

#include <stdio.h>
#include <math.h>
int main() {
    float l, r, f;
    printf("Enter L and R: ");
    scanf("%f %f", &l, &r);
    for(float c = 0; c <= 0.1; c += 0.01) {
        f = sqrt(1/(l*c) - (r*r)/(4*c*c));
        printf("Frequency at %.2f Capacitance is: %.2f\n", c, f);
    }
}