#include <stdio.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void reverse(char *str, int k) {
    static int i = 0;


    if (*(str + k) == '\0') {
        return;
    }

    reverse(str, k + 1);

    if (i <= k) {
        swap(&str[i++], &str[k]);
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    
    reverse(str, 0);
    
    printf("\n\t\tReverse of the given string is: %s\n", str);

    return 0;
}

