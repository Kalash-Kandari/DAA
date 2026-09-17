//Write a C program that accepts a positive integer containing digits from 0 to 9. Exactly one digit is missing, while the remaining nine digits appear exactly once. 
#include<stdio.h>
#include<string.h>

int main() {
    char input[20];
    int digit[10]={0};
    int i;

    printf("Enter a positive integer: ");
    scanf("%s", input);

    for(i=0; i<strlen(input); i++){
        digit[input[i]-'0'] = 1;
    }

    for(i=0; i<10; i++){
        if(digit[i]==0){
            printf("Missing number is %d", i);
            break;
        }
    }
    return 0;
}