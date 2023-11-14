#include <stdio.h>

int main() {

    FILE *pF = fopen("/Users/minhtuan1407/git-repo/minhtuan1407/learn-c-youtube-87SH2Cn0s9A/48.\ writing\ files/test.txt", "a");

    fprintf(pF, "Spongebob Squarepants\n");

    fclose(pF);

    // if (remove("/Users/minhtuan1407/git-repo/minhtuan1407/learn-c-youtube-87SH2Cn0s9A/48. writing files/test.txt") == 0) {
    //     printf("File deleted successfully\n");
    // } else {
    //     printf("Error deleting file\n");
    // }

    return 0;

}
