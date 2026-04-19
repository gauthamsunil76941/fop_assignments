#include <stdio.h>
#include <math.h>

void main(){
    int b,d=0,i=0,r;

    printf("Enter binary number: ");
    scanf("%d",&b);

    while(b>0){
        r=b%10;
        d+=r*pow(2,i);
        b/=10;
        i++;
    }

    printf("Decimal=%d",d);
}