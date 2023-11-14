#include <stdio.h>
#include <ctype.h>

int main() {

    // Bitwise operators = scpecial operators used in bit level programming
    // & = bitwise AND
    // | = bitwise OR
    // ^ = bitwise XOR
    // << = bitwise left shift
    // >> = bitwise right shift

    int x = 6;  // 6 = 00000110
    int y = 12; //12 = 00001100
    int z = 0;  // 0 = 00000000

    z = x & y; // 4 = 00000100
    printf("The value of AND is %d\n", z);

    z = x | y; // 14 = 00001110
    printf("The value of OR is %d\n", z);

    z = x ^ y; // 10 = 00001010
    printf("The value of XOR is %d\n", z);

    z = x << 1; // 12 = 00001100
    printf("The value of left shift is %d\n", z);

    z = x >> 1; // 3 = 00000011
    printf("The value of right shift is %d\n", z);

    return 0;

}
