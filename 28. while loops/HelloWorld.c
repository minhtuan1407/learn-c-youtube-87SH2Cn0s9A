#include <stdio.h>
#include <string.h>


int main() {

    // while loop = repeats a section of code positively infinitly
    // until the loop condition is no longer true
    // a while loop might not execute at all

    char name[25];

    printf("\nEnter your name: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0) {
        printf("\nYou did not enter a name. Please enter your name: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s!\n", name);

    return 0;
}
