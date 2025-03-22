/*
Write a program that prints the following diamond shape. You may use printf
statements that print either a single asterisk (*) or a single blank. Maximize your use
of iteration (with nested for statements) and minimize the number of printf
statements.
*/ 

#include <stdio.h>

void drawPattern(int numOfLines) {
    int lines, spaces, stars;

    // this loop is for the first triangle
    for (lines = 0; lines < numOfLines; lines++) {
        // this loop is for printing the spaces
        for (spaces = numOfLines - lines - 1; spaces >= 0; spaces--) {
            printf(" ");
        }
        // this loop is for printing the stars
        for (stars = 0; stars < 2 * lines + 1; stars++) {
            printf("*");
        }
        printf("\n");
    }
    // this loop is for the second triangle
    for (lines = numOfLines - 2; lines >= 0; lines--) {
        // this loop is for printing the spaces
        for (spaces = numOfLines - lines - 1; spaces >= 0; spaces--) {
            printf(" ");
        }
        // this loop is for printing the stars
        for (stars = 2 * lines + 1; stars > 0; stars--) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    drawPattern(5);
    return 0;
}