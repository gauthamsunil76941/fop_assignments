#include <stdio.h>

void main() {
    int choice;
    float a, b;

    while (1) {
        printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5)
            break;

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch (choice) {
            case 1:
                printf("Result = %.2f\n", a + b);
                break;
            case 2:
                printf("Result = %.2f\n", a - b);
                break;
            case 3:
                printf("Result = %.2f\n", a * b);
                break;
            case 4:
                if (b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Division by zero not allowed\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    }

}