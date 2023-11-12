#include <stdio.h>
#include <string.h>

struct Student {
    char name[12];
    float gpa;
};

int main() {

    struct Student student1 = { "John", 3.5 };
    struct Student student2 = { "Mary", 4.0 };
    struct Student student3 = { "Peter", 2.5 };
    struct Student student4 = { "Jane", 3.0 };

    struct Student students[] = { student1, student2, student3, student4 };

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++) {
        printf("%s has a GPA of %.2f\n", students[i].name, students[i].gpa);
    }

    return 0;

}
