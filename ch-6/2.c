// The factorial of an integer m is the product of consecutive integers from 1 to m i.e 

// factorial m = m! = m*(m-1)*(m-2)*...*1

#include <stdio.h>
#include <time.h>
unsigned long int fact(unsigned int m);
int main() {
    unsigned int m;
    printf("Enter number to find factorial of: ");
    scanf("%u", &m);
    printf("%lu\n", fact(m));
}

unsigned long int fact(unsigned int m) {
    if(m == 0) {
        return 1;
    }
    return m*fact(m-1);
}