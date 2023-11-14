#include <stdio.h>

int main() {

    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to store some value (person)
    // memory address = the address of a memory block is located at (house address)

    char a;
    double b[3];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));

    printf("%p\n", &a);
    printf("%p\n", &b);

    return 0;

}
