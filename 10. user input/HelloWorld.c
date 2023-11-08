#include <stdio.h>
#include <string.h>


int main() {

    char name[25]; // bytes
    int age;

    printf("Enter your name: ");
    // scanf("%s", name);
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';


    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your name is %s and you are %d years old\n", name, age);

    return 0;
}