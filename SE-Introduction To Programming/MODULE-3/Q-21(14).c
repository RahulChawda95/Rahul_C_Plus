#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i;

    printf("Enter a string: ");
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i) {
        if (s1[i] == '\n') {
            s1[i] = '\0';
            break;
        }
    }


    printf("String s1: %s\n", s1);


    for (i = 0; s1[i] != '\0'; ++i) {
        // Copying the characters to s2 from s1
        s2[i] = s1[i];
    }

    s2[i] = '\0';

    printf("String s2: %s\n", s2);

    return 0;
}

