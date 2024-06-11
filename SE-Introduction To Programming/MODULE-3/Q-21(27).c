#include <stdio.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int empno;
    int age;
    char empname[50];
    char address[100];
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    if (numEmployees > MAX_EMPLOYEES) {
        printf("The number of employees cannot exceed %d.\n", MAX_EMPLOYEES);
        return 1;
    }
	int i;
    for (i = 0; i < numEmployees; i++) {
        printf("\n\n\t===================== EMPLOYEE %d =====================\n", i + 1);
        printf("\n\t\tEnter Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("\n\t\tEnter Age: ");
        scanf("%d", &employees[i].age);
        printf("\n\t\tEnter Name: ");
        scanf(" %[^\n]s", employees[i].empname);  // To read a string with spaces
        printf("\n\t\tEnter Address: ");
        scanf(" %[^\n]s", employees[i].address);  // To read a string with spaces

        printf("\n\t\t----------Details-----------");
        printf("\n\t\tEmployee Number: %d", employees[i].empno);
        printf("\n\t\tAge: %d", employees[i].age);
        printf("\n\t\tName: %s", employees[i].empname);
        printf("\n\t\tAddress: %s", employees[i].address);
    }

    return 0;
}

