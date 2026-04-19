#include <stdio.h>

void swap_value(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Inside call by value: a = %d, b = %d\n", a, b);
}

void swap_pointer(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("Inside call by reference: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap_value(x, y);
    printf("After call by value: x = %d, y = %d\n", x, y);

    swap_pointer(&x, &y);
    printf("After call by reference: x = %d, y = %d\n", x, y);

    return 0;
}