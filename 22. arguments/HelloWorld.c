#include <stdio.h>

void birthday(char x[], int y) {
    printf("\nHappy birthday dear %s!", x);
    printf("\nYou are now %d years old!", y);
}

int main() {

    char name[] = "Tuan";
    int age = 25;

    birthday(name,age);

    return 0;
}