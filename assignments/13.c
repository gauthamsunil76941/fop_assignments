#include <stdio.h>

void main(){
    int n,r;

    printf("Enter number: ");
    scanf("%d",&n);

    printf("Reverse: ");
    while(n>0){
        r=n%10;
        printf("%d",r);
        n/=10;
    }
}