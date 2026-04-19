#include <stdio.h>

void main(){
    int n,a[50];

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Even: ");
    for(int i=0;i<n;i++)
        if(a[i]%2==0) printf("%d ",a[i]);

    printf("\nOdd: ");
    for(int i=0;i<n;i++)
        if(a[i]%2!=0) printf("%d ",a[i]);
}