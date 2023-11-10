#include <stdio.h>

int main() {

    // switch = A more efficient way to write a long if-else statement
    //          switch statements are best used when you have multiple possible conditions

    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch (grade) {
        case 'A':
            printf("\nYou did great!");
            break;
        case 'B':
            printf("\nYou did alright!");
            break;
        case 'C':
            printf("\nYou did poorly!");
            break;
        case 'D':
            printf("\nYou did very bad!");
            break;
        case 'F':
            printf("\nYou failed!");
            break;
        default:
            printf("\nInvalid grade.");
    }

    return 0;
}