#include <stdio.h>
#include <string.h>

int main() {

    char string1[] = "Hello";
    char string2[] = "World";

    // strlwr(string1); // convert string to lowercase
    // strupr(string1); // convert string to uppercase
    // strcat(string1, string2, 1); // concatenate string2 to string1
    // strncat(string1, string2, 1); // concatenate n characters from string2 to string1
    // strcpy(string1, string2); // copy string2 to string1
    // strncpy(string1, string2, 4); // copy n characters from string2 to string1

    // strset(string1, '?'); // set all characters in string1 to a given character
    // strnset(string1, '?', 3); // set n characters in string1 to a given character
    // strrev(string1); // reverse string1

    int result = strlen(string1); // get length of string1
    // int result = strcmp(string1, string2); // compare string1 to string2
    // int result = strncmp(string1, string2, 4); // compare n characters of string1 to string2
    // int result = stricmp(string1, string2); // compare string1 to string2, ignoring case
    // int result = strnicmp(string1, string2, 4); // compare n characters of string1 to string2, ignoring case

    printf("\n%s", string1);

    // if (result == 0) {
    //     printf("\nStrings are equal");
    // } else if (result < 0) {
    //     printf("\nString1 is less than string2");
    // } else {
    //     printf("\nString1 is greater than string2");
    // }

    return 0;
}
