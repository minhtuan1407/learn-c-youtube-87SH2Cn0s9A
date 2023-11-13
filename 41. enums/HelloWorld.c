#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thur = 5, Fri = 6, Sat = 7};

int main() {

    // enum = a user defined type of named interger identifiers
    // help to make a program more readable and manageable

    enum Day today = Sat;

    // printf("%d\n", today);

    if (today == Sun || today == Sat) {
        printf("It's the weekend!\n");
    } else {
        printf("It's a weekday!\n");
    }

    return 0;

}
