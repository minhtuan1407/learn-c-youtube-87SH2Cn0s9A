#include <stdio.h>

int main() {

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("\nYou are an adult.");
    } else if (age == 0) {
        printf("\nYou are a baby.");
    }
    else if (age < 0) {
        printf("\nYou are not born yet.");
    }
    else {
        printf("\nYou are not an adult.");
    }

    return 0;
}