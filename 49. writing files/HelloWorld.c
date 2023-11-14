#include <stdio.h>

int main() {

    FILE *pF = fopen("/Users/minhtuan1407/git-repo/minhtuan1407/learn-c-youtube-87SH2Cn0s9A/49. writing files/poem.txt", "r");

    char buffer[255];

    if (pF == NULL) {
        printf("Error opening file\n");
        return -1;
    } else {
        while (fgets(buffer, 255, pF) != NULL) {
            printf("%s", buffer);
        }
    }

    // fgets(buffer, 255, pF);
    // printf("%s", buffer);


    

    fclose(pF);

    // if (remove("/Users/minhtuan1407/git-repo/minhtuan1407/learn-c-youtube-87SH2Cn0s9A/48. writing files/test.txt") == 0) {
    //     printf("File deleted successfully\n");
    // } else {
    //     printf("Error deleting file\n");
    // }

    return 0;

}
