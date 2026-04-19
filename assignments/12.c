#include <stdio.h>

void main(){
    int a,b,gcd=1;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    for(int i=1;i<=a && i<=b;i++)
        if(a%i==0 && b%i==0) gcd=i;

    for(int i=2;i<=a;i++)
        if(a%i==0){
            printf("Smallest divisor=%d\n",i);
            break;
        }

    printf("GCD=%d",gcd);
}