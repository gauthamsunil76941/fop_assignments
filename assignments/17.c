#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x, sum = 0, term;
    int sign = 1;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        term = pow(x, 2*i + 1) / tgamma(2*i + 2); // factorial using tgamma
        sum += sign * term;
        sign = -sign;
    }

    printf("Sum of sine series = %f", sum);

    return 0;
}