#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks1, marks2, marks3;
    float total, percentage;
};

void main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks in 3 subjects: ");
        scanf("%f %f %f", &s[i].marks1, &s[i].marks2, &s[i].marks3);

        s[i].total = s[i].marks1 + s[i].marks2 + s[i].marks3;
        s[i].percentage = s[i].total / 3;
    }

    printf("\nStudent Results:\n");
    printf("Roll\tName\tTotal\tPercentage\n");

    for(int i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t%.2f\n",
               s[i].roll, s[i].name, s[i].total, s[i].percentage);
    }

}