#include <stdio.h>

int main() {

    // continue = skips rest of the code and forces the next iteration of the loop to run
    // break = breaks out of the loop

    for (int i = 0; i <= 10; i++) {
        if (i == 5) {
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}
