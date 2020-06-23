// 4.9 Write a program to read the name ANIL KUMAR GUPTA in three parts using the scanf statement and to display the same in the following format using the printf statement.

// (a) ANIL K. GUPTA
// (b) A.K. GUPTA
// (c) GUPTA A.K.

#include <stdio.h>
int main() {
    char first[10], middle[10], last[10];
    scanf("%s %s %s", first, middle, last);
    printf("%s %1.1s. %s\n", first, middle, last);
    printf("%1.1s.%1.1s. %s\n", first, middle, last);
    printf("%s %1.1s.%1.1s.\n", last, first, middle);
}