// 4.1 Given the string "WORDPROCESSING", write a program to read the string from the terminal and display the same in the following formats:

// (a) WORD PROCESSING
// (b) WORD
//     PROCESSING
// (c) W.P

#include <stdio.h>
int main() {
    char word[20];
    char first[5], second[11];
    scanf("%4s %s",first, second);
    printf("%s %s\n", first, second);
    printf("%s\n%s\n", first, second);
    printf("%.1s.%.1s.\n", first, second);
}