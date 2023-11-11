#include <stdio.h>

int findMax(int x, int y) {

    // if (x > y) {
    //     return x;
    // } else {
    //     return y;
    // }
    return (x > y) ? x : y;
}

int main() {

    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? valie if true : value if false

    int max = findMax(5, 4);

    printf("The max number is %d", max);

    return 0;

}