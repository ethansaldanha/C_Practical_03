#include <stdio.h>
#include <string.h>

int main(){
    char correct_password[] = "admin123";
    char entered_password[20];
    int attempts = 0;

    while (attempts < 3) {
        printf("Enter Password : ");
        scanf("%s", entered_password);
            
            if (strcmp(entered_password, correct_password) == 0 ){
            printf("Login SUcessful\n");
            break;
            }
            else {
                if (attempts < 2) {
                    printf("Incorrect Password\n");
                }
            }
            attempts++;
        }
        if (attempts == 3) {
            printf("Account Locked\n");

        }
        return 0;
    }