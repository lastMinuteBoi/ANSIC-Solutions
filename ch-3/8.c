// 3.8 The total distance travelled by a vehicle in t seconds is given by 

// distance = ut + (at^2)/2

// Write a program to evaluate the distance travelled at regular intervals of time.

#include <stdio.h>
int main() {
    int timeInterval, time;
    float initialSpeed, acceleration, distance;
    printf("Enter the initial speed and acceleration: ");
    scanf("%f %f", &initialSpeed, &acceleration);
    printf("Enter the time interval: ");
    scanf("%d", &timeInterval);
    for(int i = 0; i <= 10; i++) {
        time = timeInterval*i;
        distance = (initialSpeed*time) + (acceleration*time*time)/2;
        printf("Distance at %4ds is %.2f\n", time, distance);
    }
}