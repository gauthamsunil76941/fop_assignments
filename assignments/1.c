#include <stdio.h>

void main() {
    int year;
    printf("Enter year to check leap year : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("Leap Year");
    else
        printf("Not a Leap Year");

}