#include <stdio.h>
#include <ctype.h>

int main() {

    char questions[][100] = {"1. What your did the C language debut?: ",
                                "2. What is the name of the creator of the C language?: ",
                                "3. What is the name of the book that introduced the C language?: ",
                                "4. What is the name of the first C compiler?: ",
                                "5. What is the name of the first C standard?: "};

    char option[][100] = {"A. 1970", "B. 1971", "C. 1972", "D. 1973",
                            "A. Dennis Ritchie", "B. Ken Thompson", "C. Brian Kernighan", "D. Steve Jobs",
                            "A. The C Programming Language", "B. The C Language", "C. The C Book", "D. The C Bible",
                            "A. B", "B. C", "C. BCPL", "D. C++",
                            "A. C89", "B. C90", "C. C91", "D. C92"};

    char answers[5] = {'B', 'A', 'A', 'C', 'B'};

    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score;

    printf("Welcome to the C Quiz Game!\n");

    for (int i = 0; i < numberOfQuestions; i++) {
        printf("\n");
        printf("%s\n", questions[i]);
        printf("\n");

        for(int j = (i * 4); j < (i * 4) + 4; j++) {
            printf("%s\n", option[j]);
        }

        printf("Enter your answer: ");
        scanf("%c", &guess);
        scanf("%c", &guess);
        // THIS NEED TO BE FIX


        guess = toupper(guess);

        if(guess == answers[i]) {
            printf("\nAnswers is %c", answers[i]);
            printf("\nGuess is %c", guess);
            printf("\nCorrect!");
            score++;
        } else {
            printf("\nAnswers is %c", answers[i]);
            printf("\nGuess is %c", guess);
            printf("\nWrong!\n");
        }
    }

    printf("Final score: %d/%d\n", score, numberOfQuestions);

    return 0;

}
