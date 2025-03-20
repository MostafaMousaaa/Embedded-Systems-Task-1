// Write C program that inputs three different integers from the keyboard, then prints 
// the sum, the average, the product, the smallest and the largest of these numbers. 
// Use only the operators you have learned without if statement. The screen dialogue 
// should appear as follows:
// Enter three different integers: 13 27 14
// Sum is 54
// Average is 18
// Product is 4914
// Smallest is 13
// Largest is 27

#include <stdio.h>

int main() {
    int a, b, c, sum, average, product, smallest, largest;
    printf("Enter three different integers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    average = sum / 3;
    product = a * b * c;
    // Nested ternary operators : condition ? value_if_true : value_if_false
    smallest = a < b ? (a < c ? a : c) : (b < c ? b : c);
    largest = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("Sum is %d\n", sum);
    printf("Average is %d\n", average);
    printf("Product is %d\n", product);
    printf("Smallest is %d\n", smallest);
    printf("Largest is %d\n", largest);
    return 0;
}
