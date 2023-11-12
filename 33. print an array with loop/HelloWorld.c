#include <stdio.h>

int main() {

    double prices[] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7};

    // printf("%.2lf\n", prices[0]);
    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]) ; i++) {
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}
