//   Write a program to perform a generic rotate right and rotate left expression using bit masking.
//  The code shall ask the user to enter an 8 bit number x, number of rotate cycles n and rotate option o.
//  The software shall print the rotate value of x, n times based on the value of o.
//  The screen dialogue should appear as follows:
//  Enter an 8 bit number: 10101010
//  Enter the number of rotate cycles: 3
//  Enter the rotate option (0 for right, 1 for left): 0
//  The rotated value is 10110101

#include <stdio.h>

int main() {
    // unsigned char: 8-bit integer
    unsigned char x, n, o, rotated_value;
    printf("Enter an 8 bit number: ");
    // we will use %hhu format specifier because it is ideal for our 8-bit.
    scanf("%hhu", &x);
    printf("Enter the number of rotate cycles: ");
    scanf("%hhu", &n);
    printf("Enter the rotate option (0 for right, 1 for left): ");
    scanf("%hhu", &o);
    if (o == 0) {
        // * Example: x = 10101010, n = 3
        // * x >> n = 00010101 (right shift by 3)
        // * x << (8-n) = 01000000 (left shift by 5)
        // * Result: 01010101 (rotated right by 3)
        rotated_value = (x >> n) | (x << (8 - n));
    } else {
        rotated_value = (x << n) | (x >> (8 - n));
    }
    printf("The rotated value is %hhu\n", rotated_value);
    return 0;
}