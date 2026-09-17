/*Write a generalised code for the following pattern (example is for n=4) 
A B C D
B C D E
C D E F
D E F G*/
#include<stdio.h>

int main() {
    int n, i, j;
    char letter;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        for(j= 0; j<n; j++){
            printf("%c ", (i+j)+65);
        }
        printf("\n");
    }
    return 0;
}
