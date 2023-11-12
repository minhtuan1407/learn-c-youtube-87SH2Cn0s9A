#include <stdio.h>
#include <string.h>

struct Player {
    char name[12];
    int score;
};

int main() {

    // struct = collection of related members ("variables")
            // they can be of different types
            // listed under one name in a block of memory
            // very similar to classes in other programming languages (but without methods)

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "John");
    player1.score = 4;

    strcpy(player2.name, "Mary");
    player2.score = 5;

    printf("%s has %d points\n", player1.name, player1.score);
    printf("%s has %d points\n", player2.name, player2.score);

    return 0;

}
