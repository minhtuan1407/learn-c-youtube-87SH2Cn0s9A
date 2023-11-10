#include <stdio.h>

int main() {

    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter num1: ");
    scanf("%lf", &num1);

    printf("Enter num2: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("\n%.2lf + %.2lf = %.2lf", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("\n%.2lf - %.2lf = %.2lf", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("\n%.2lf * %.2lf = %.2lf", num1, num2, result);
            break;
        case '/':
            result = num1 / num2;
            printf("\n%.2lf / %.2lf = %.2lf", num1, num2, result);
            break;
        default:
            printf("\nInvalid operator.");
    }

    return 0;
}