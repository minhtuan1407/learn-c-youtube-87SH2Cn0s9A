#include <stdio.h>
#include <ctype.h>
int main() {

    char unit;
    float temp;

    printf("Enter unit (C or F): ");
    scanf("%c", &unit);

    unit = toupper(unit);

    printf("Enter temperature: ");
    scanf("%f", &temp);

    if (unit == 'C') {
        printf("Temperature in C: %.2f", temp);
        printf("\n%.2f C = %.2f F", temp, (temp * 9 / 5) + 32);
    } else if (unit == 'F') {
        printf("Temperature in F: %.2f", temp); 
        printf("\n%.2f F = %.2f C", temp, (temp - 32) * 5 / 9);
    } else {
        printf("\nInvalid unit.");

    }

    return 0;
}