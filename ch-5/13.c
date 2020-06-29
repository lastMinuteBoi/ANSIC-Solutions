// 5.13 Write a program to compute and display the sum of all integers that are divisible by 6 but not divisible by 4 and lie between 0 and 100. The program should also count and display the number of such values.

#include <stdio.h>
int main() {
    int start, end, newStart, count = 0, sum = 0;
    printf("Enter start and end limit: ");
    scanf("%d %d", &start, &end);
    if(start%6 != 0) {
        newStart = start + (6 - start%6); // Think about it a little
    } else {
        newStart = start;
    }
    while(newStart <= end) {
        if(newStart%4 != 0) {
            count++;
            sum += newStart;
            printf("%d ", newStart);
        }
        newStart += 6;
    }
    printf("\nCount is %d\nSum is %d\n", count, sum);
}
