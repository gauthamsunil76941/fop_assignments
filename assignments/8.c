#include <stdio.h>

void main() {
    float m[5], total = 0, per;
    int pass = 1;
    printf("enter marks of 5 subjects : ");
    for(int i=0;i<5;i++) {
        scanf("%f",&m[i]);
        if(m[i] < 40) pass = 0;
        total += m[i];
    }

    per = total / 5;

    if(!pass) printf("Fail\n");
    else {
        if(per >= 75) printf("Distinction\n");
        else if(per >= 60) printf("First Division\n");
        else if(per >= 50) printf("Second Division\n");
        else printf("Third Division\n");
    }
}