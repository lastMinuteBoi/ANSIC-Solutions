// 5.4 Given a list of marks ranging from 0 to 100, write a program to compute and print the number of students:

// (a) who have obtained more than 80 marks,
// (b) who have obtained more than 60 marks,
// (c) who have obtained more than 40 marks,
// (d) who have obtained 40 or less marks,
// (e) in the range 81 to 100,
// (f) in the range 61 to 80,
// (g) in the range 41 to 60, and,
// (h) in the range 0 to 40

// The program should use a minimum number of if statements

#include <stdio.h>
int main() {
    int students, moreThan40 = 0, moreThan60 = 0, moreThan80 = 0, lessThan40 = 0, sixty1to80 = 0, fortyto60 = 0;
    printf("Enter number of students: ");
    scanf("%d", &students);
    int marks[students];
    for(int i = 0; i < students; i++) {
        scanf("%d", &marks[i]);
        if(marks[i] > 40 && marks[i] <= 100) {
            moreThan40++; //c
            if(marks[i] <= 60) {
                fortyto60++; //g
            }
            if(marks[i] > 60) {
                moreThan60++; //b
                if(marks[i] <= 80) {
                    sixty1to80++; //f
                }
                if(marks[i] > 80) {
                    moreThan80++; //a, e
                }
            }
        } else if(marks[i] >= 0 && marks[i] <= 40) {
            lessThan40++;  //d, h
        }
    }
    printf("%d %d %d %d %d %d %d %d\n", moreThan80, moreThan60, moreThan40, lessThan40, moreThan80, sixty1to80, fortyto60, lessThan40);
}