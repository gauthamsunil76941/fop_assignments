#include <stdio.h>

long fact(int n){
    long f = 1;
    for(int i = 1; i <= n; i++) f *= i;
    return f;
}

int main(){
    int ch;
    float a, b;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch(ch){
        case 1:
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a + b);
            break;

        case 2:
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a - b);
            break;

        case 3:
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a * b);
            break;

        case 4:
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a / b);
            break;

        case 5: {
            scanf("%f %f", &a, &b);
            float res = 1;
            for(int i = 0; i < (int)b; i++) res *= a;
            printf("Result = %.2f", res);
            break;
        }

        case 6:
            scanf("%f", &a);
            printf("Result = %ld", fact((int)a));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}