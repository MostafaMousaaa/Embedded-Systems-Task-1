// (Final Velocity) Write C program that asks the user to enter the initial velocity and 
// acceleration of an object, and the time that has elapsed, places them in the 
// variables u, a, and t, and prints the final velocity, v, and distance traversed, s, using 
// the following equations.
// v = u + at
// s = ut + 1/2at^2

#include <stdio.h>

int main() {
    float u, a, t, v, s;
    printf("Enter the initial velocity: ");
    scanf("%f", &u);
    printf("Enter the acceleration: ");
    scanf("%f", &a);
    printf("Enter the time elapsed in Seconds: ");
    scanf("%f", &t);
    v = u + a * t;
    s = u * t + 0.5 * a * t * t;
    printf("The final velocity is %.2f\n", v);
    printf("The distance traversed is %.2f\n", s);
    return 0;
}