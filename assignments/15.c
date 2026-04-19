#include <stdio.h>
#include <stdlib.h>

void main(){
    printf("Random numbers:\n");
    for(int i=0;i<5;i++)
        printf("%d\n",rand()%100);
}