#include <stdio.h>

void main() {
    int n, temp, sum=0, r;
    printf("enter number : ");
    scanf("%d",&n);
    temp = n;

    while(n>0) {
        r = n%10;
        sum += r*r*r;
        n /= 10;
    }

    if(sum == temp) printf("Armstrong");
    else printf("Not Armstrong");
}