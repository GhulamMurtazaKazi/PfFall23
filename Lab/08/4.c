QUESTION # 4
Your task is to create a C program that performs password length
validation and user authentication based on the given requirements below:
a)    
Prompts the user to enter a password.
b)    
Validates the entered password by checking if it is
at least 8 characters long.
c)    
If the password meets the length requirement, the
program should compare it to a stored password "Secure123."
d)    
If the
entered password matches the stored password, display "Login successful.
Welcome!" Otherwise, display "Login failed. Incorrect password."

  #include <stdio.h>
#include <string.h>

int main() {
    char password[50];
    char stored_password[] = "Secure123";

    printf("Enter a password: ");
    scanf("%s", password);

    if(strlen(password) < 8) {
        printf("Password must be at least 8 characters long.\n");
        return 0;
    }

    if(strcmp(password, stored_password) == 0) {
        printf("Login successful. Welcome!\n");
    } else {
        printf("Login failed. Incorrect password.\n");
    }

    return 0;
}

