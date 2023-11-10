#include <stdio.h>
#include <stdbool.h>

int main() {

    // logical operators: && AND checks if both conditions are true

    float temp = 25;
    bool sunny = false;

    if (temp >= 0 && temp <= 30 && sunny) {
        printf("\nThe weather is nice.");
    } else {
        printf("\nThe weather is bad.");
    }

    return 0;
}