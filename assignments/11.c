#include <stdio.h>
#include <math.h>

int main(){
    int n, prime = 1;
    int i, fact = 1, temp;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Square = %d\n", n*n);
    printf("Cube = %d\n", n*n*n);
    printf("Square root = %.2f\n", sqrt(n));

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            prime = 0;
            break;
        }
    }

    if(n <= 1) prime = 0;

    if(prime) printf("Prime\n");
    else printf("Not Prime\n");

    for(i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial = %d\n", fact);

    printf("Prime factors: ");
    temp = n;

    for(i = 2; i <= temp; i++) {
        while(temp % i == 0) {
            printf("%d ", i);
            temp /= i;
        }
    }

    return 0;
}