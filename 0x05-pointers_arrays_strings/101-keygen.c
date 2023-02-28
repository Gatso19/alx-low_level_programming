#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define PASSWORD_LENGTH 8

/*Function to generate a random password*/
void generate_password(char *password) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    password[PASSWORD_LENGTH] = '\0'; /*Add null terminator to the end*/
}

/*Function to check if a password is valid*/
int is_valid_password(const char *password) {
    int i;
    if (strlen(password) != PASSWORD_LENGTH) {
        return 0;  /*Password is not the right length*/
    }
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        if (!isalnum(password[i])) {
            return 0; /*Password contains non-alphanumeric characters*/
        }
    }
    return 1; /*Password is valid*/
}

/*Main function*/
int main() {
    char password[PASSWORD_LENGTH + 1]; /*Add 1 to include null terminator*/
    srand(time(NULL)); /*Seed the random number generator*/
    while (1) {
        generate_password(password);
        if (is_valid_password(password)) {
            printf("Generated password: %s\n", password);
            break;
        }
    }
    return 0;
}
