#include <stdio.h>

int main() {
    char name[100];
    char birthDate[20];
    int age;
    char address[200];

    // Taking user input for personal details
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your birth date (dd/mm/yyyy): ");
    fgets(birthDate, sizeof(birthDate), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar(); // To consume the newline character left by scanf

    printf("Enter your address: ");
    fgets(address, sizeof(address), stdin);

    // Displaying the personal details
    printf("\n\n\t\t\xb2\xb2\xb2\xb2 PERSONAL DETAILS \xb2\xb2\xb2\xb2\n");
    printf("\n\tNAME       : %s", name);
    printf("\n\tBIRTH DATE : %s", birthDate);
    printf("\n\tAGE        : %d YEARS\n", age);
    printf("\n\tADDRESS    : %s", address);

    return 0;
}

