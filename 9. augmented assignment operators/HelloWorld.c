#include <stdio.h>

int main() {
    // augmented assignment operators = used to replace a statement where an operator
    //                                  takes a variable as one of its arguments and then assigns the result back to that same variable
    //                                  x = x + 1
    //                                  x += 1

    int x = 5;

    // x = x + 1;
    // x += 1;

    // x = x - 1;
    // x -= 1;

    // x = x * 1;
    // x *= 1;

    // x = x / 1;
    // x /= 1;

    // x = x % 1;
    x %= 1;

    printf("Calculation of %d\n", x);
}