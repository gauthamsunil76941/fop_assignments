#include <stdio.h>
#include <string.h>

void findLength();
void copyString();
void concatenateString();
void compareString();
void reverseString(); 

int main() {
    int choice;

    while(1) {
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear buffer

        switch(choice) {
            case 1: findLength(); break;
            case 2: copyString(); break;
            case 3: concatenateString(); break;
            case 4: compareString(); break;
            case 5: reverseString(); break;
            case 6: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}

// Length
void findLength() {
    char str[100];
    printf("Enter string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;

    printf("Length = %lu\n", strlen(str));
}

// Copy
void copyString() {
    char str1[100], str2[100];

    printf("Enter string: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = 0;

    strcpy(str2, str1);
    printf("Copied string = %s\n", str2);
}

// Concatenate
void concatenateString() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = 0;

    strcat(str1, str2);
    printf("Result = %s\n", str1);
}

// Compare
void compareString() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = 0;

    if(strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
}

// Reverse using second array
void reverseString() {
    char str[100], rev[100];
    int len;

    printf("Enter string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;

    len = strlen(str);

    for(int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }

    rev[len] = '\0';

    strcpy(str, rev);

    printf("Reversed string = %s\n", str);
}