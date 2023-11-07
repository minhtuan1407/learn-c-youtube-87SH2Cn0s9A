#include <stdio.h>

int main() {
    // format specifier % = defines and formats a type of data to be printed

    // %c = character
    // %s = string (array of characters)
    // %f = float (4 bytes)
    // %lf = double (8 bytes)
    // %d = integer (4 bytes)

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%-8.2f\n", item1);
    printf("Item 2: $%-8.2f\n", item2);
    printf("Item 3: $%-8.2f\n", item3);

    return 0;
}