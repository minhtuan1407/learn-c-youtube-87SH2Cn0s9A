#include <stdio.h>
#include <stdbool.h>

int main() {

    // logical operators: ! NOT checks if the condition is false

    bool sunny = true;

    if (!sunny) {
        printf("\nIt's cloudy.");
    } else {
        printf("\nIt's sunny.");
    }

    return 0;
}