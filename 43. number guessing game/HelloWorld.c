#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    srand(time(0));

    // generate a random number between MIN and MAX
    answer = (rand() % MAX) + MIN;

    do {
        printf("Enter a guess between %d and %d: ", MIN, MAX);
        scanf("%d", &guess);
        if (guess > answer) {
            printf("Too high!\n");
        } else if (guess < answer) {
            printf("Too low!\n");
        } else {
            printf("Correct!");
        }
        guesses++;
    }while(guess != answer);

    printf("The right answer was %d\n", answer);
    printf("It took you %d guesses\n", guesses);


    return 0;

}
