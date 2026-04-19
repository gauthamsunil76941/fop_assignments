#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char designation[50];
    char gender;
    int day, month, year;
    float salary;
} employee;

void totalEmployees(int n);
void countGender(employee e[], int n);
void highSalary(employee e[], int n);
void asstManager(employee e[], int n);

void main() {
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);
    getchar();

    employee e[n];

    for(int i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i+1);

        printf("Name: ");
        fgets(e[i].name, 50, stdin);
        e[i].name[strcspn(e[i].name, "\n")] = 0;

        printf("Designation: ");
        fgets(e[i].designation, 50, stdin);
        e[i].designation[strcspn(e[i].designation, "\n")] = 0;

        printf("Gender (M/F): ");
        scanf(" %c", &e[i].gender);

        printf("Date of Joining (day month year) : ");
        scanf("%d %d %d", &e[i].day, &e[i].month, &e[i].year);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
        getchar();
    }

    totalEmployees(n);
    countGender(e, n);
    highSalary(e, n);
    asstManager(e, n);

}

void totalEmployees(int n) {
    printf("\nTotal Employees = %d\n", n);
}

void countGender(employee e[], int n) {
    int male = 0, female = 0;

    for(int i = 0; i < n; i++) {
        if(e[i].gender == 'M' || e[i].gender == 'm')
            male++;
        else if(e[i].gender == 'F' || e[i].gender == 'f')
            female++;
    }

    printf("Male = %d\nFemale = %d\n", male, female);
}

void highSalary(employee e[], int n) {
    printf("\nEmployees with salary > 10000:\n");

    for(int i = 0; i < n; i++) {
        if(e[i].salary > 10000)
            printf("%s\n", e[i].name);
    }
}

void asstManager(employee e[], int n) {
    printf("\nEmployees with designation 'Asst Manager':\n");

    for(int i = 0; i < n; i++) {
        if(strcmp(e[i].designation, "Asst Manager") == 0)
            printf("%s\n", e[i].name);
    }
}