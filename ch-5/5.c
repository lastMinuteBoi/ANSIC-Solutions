// 5.5 Admission to a professional course is subject to the following conditions: 

// (a) Marks in Mathematics >= 60
// (b) Marks in Physics >= 50
// (c) Marks in Chemistry >= 40
// (d) Total in all three subjects >= 200
// or 
// Total in Mathematics or Physics >= 150

// Given the marks in the three subjects, write a program to process the application to list the eligible candidates

#include <stdio.h>
int main() {
    int math, physics, chem, total = 0, totalInMP = 0;
    printf("Enter Math, Physics, Chem marks: ");
    scanf("%d %d %d", &math, &physics, &chem);
    if(math >= 60 && physics >= 50 && chem >= 40) {
        total = math + physics + chem;
        totalInMP = math + physics;
        if(total >= 200 || totalInMP >= 150) {
            printf("Qualified\n");
        } else {
            printf("Disqualified for not having minimum total marks\n");
        }
    } else {
        printf("Disqualified for having minimum marks in every subject\n");
    }
}
