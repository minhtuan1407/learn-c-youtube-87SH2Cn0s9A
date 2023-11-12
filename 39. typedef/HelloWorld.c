#include <stdio.h>
#include <string.h>

// typedef char user[25];

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

int main() {

    // typedef = reserved keyword that gives an existing datatype a "nickname"

    User user1 = { "John", "1234", 123 };
    User user2 = { "Mary", "5678", 456 };

    printf("%s has id %d\n", user1.name, user1.id);
    printf("%s has id %d\n", user2.name, user2.id);

    return 0;

}
