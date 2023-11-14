#include <stdio.h>

void printAge(int *pAge) {
    printf("You are %d years old\n", *pAge); // dereferencing
}

int main() {

    // pointers = a "variable-like" reference that holds a memory address to another variable
    // some task are performed more efficiently with pointers, ex: swapping values, passing functions as arguments, etc.
    // * = indirection operator (value at address)

    int age = 25;
    int *pAge = NULL; // good practice to initialize pointers to NULL
    pAge = &age;

    // printf("Address of age: %p\n", &age);
    // printf("Value of pAge: %p\n", pAge);

    // printf("Size of age: %d\n", sizeof(age));
    // printf("Size of pAge: %d\n", sizeof(pAge));

    // printf("Value of age: %d\n", age);
    // printf("Value at stored address: %d\n", *pAge); // dereferencing

    printAge(pAge);

    return 0;

}
