#include <stdio.h>

// gcc HelloWorld.c -o HelloWorld.exe

int main() {

    // This is a comment
    /* 
    This is a multiline comment
    */

    /* escape sequences = characters combinations that consist of a backslash (\) followed by a letter or by a combination of digits.
    They are used to format strings and characters.
    \n = new line
    \t = tab
    \b = backspace
    \r = carriage return
    */
    printf("\"Hello World!\"\n");
    printf("\\Hello World!\\\n");
    return 0;
}