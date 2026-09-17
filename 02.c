//Write a program using a while loop that repeatedly asks the user to enter the password and stops only when the correct password is entered. Finally, display "Login successful!".
#include<stdio.h>
#include<string.h>

char password[20];

int main() {

    while(1){
        printf("Enter the password: ");
        scanf("%s", password);
        if(strcmp(password, "Password123") == 0){
            printf("Login Successful!\n");
            break;
        } else {
            printf("Incorrect, Try Again.\n");
        }
    }
    return 0;
}
