// 5.12 An electricity board charges the following rates for the use of electricity: 

// For the first 200 units: 80p per unit
// For the next 100 units: 90p per unit
// Beyond 300 units: Rs 1 per unit

// All users are charged a minimum of Rs 100 as meter charge. If the total amount is more than Rs. 400, then an additional surcharge of 15% of the total amount is charged. Write a program to read the names of users and number of units consumed and print out the charges with names.

#include <stdio.h>
#define LIMIT 3
typedef struct {
    char name[LIMIT];
    int unit[LIMIT];
    float bill[LIMIT];
} electricity;

int main() {
    electricity people[LIMIT];
    for(int i = 0; i < LIMIT; i++) {
        scanf("%s %d", people[i].name, people[i].unit);
    }
    for(int i = 0; i < LIMIT; i++) {
        int units = people[i].unit;
        if(units >= 0 && units <= 200) {
            people[i].bill = 100 + units*0.80;
        } else if(units > 200 && units <= 300) {
            people[i].bill = 100 + 200*0.80 + (units-200)*0.90;
        } else if(units > 300) {
            people[i].bill = 100 + 200*0.80 + 100*0.90 + (units-300)*1;
        } else {
            printf("Enter correct units\n");
        }
        if(people[i].bill > 400) {
            people[i].bill += 0.15*people[i].bill; 
        }
    }
}


