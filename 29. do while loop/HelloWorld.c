#include <stdio.h>
#include <string.h>


int main() {

    // while loop = check a condition, THEN execute a block of code if the condition is true
    // do while loop = execute a block of code, THEN check if the condition is true, then repeat the loop

    int number = 0;
    int sum = 0;

    do{
        printf("Enter a number above 0: ");
        scanf("%d", &number);
        if (number > 0) {
            sum += number;
        }
    }while (number > 0);

    
    printf("The sum is %d\n", sum);

    return 0;
}
