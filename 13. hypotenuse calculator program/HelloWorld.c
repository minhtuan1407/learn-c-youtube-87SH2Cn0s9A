#include <stdio.h>
#include <math.h>

int main() {

    double A;
    double B;
    double C;

    printf("Enter A: ");
    scanf("%lf", &A);
    printf("Enter B: ");
    scanf("%lf", &B);

    C = sqrt(pow(A, 2) + pow(B, 2));

    printf("\nC = %lf", C);

    return 0;
}