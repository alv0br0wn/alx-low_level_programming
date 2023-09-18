#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 8

// Function to generate a random character within a specified range
char random_char(const char *char_set) {
    int set_length = strlen(char_set);
    return char_set[rand() % set_length];
}

// Function to generate a random valid password
void generate_password(char *password) {
    // Define the character sets for different parts of the password
    const char lowercase_chars[] = "abcdefghijklmnopqrstuvwxyz";
    const char uppercase_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char digit_chars[] = "0123456789";

    // Generate random characters for each part of the password
    for (int i = 0; i < PASSWORD_LENGTH; ++i) {
        char *char_set = NULL;
        switch (i % 3) {
            case 0: const char = (lowercase_chars); break;
            case 1: const char = (uppercase_chars); break;
            case 2: const char = (digit_chars); break;
        }
        password[i] = random_char(char_set);
    }
    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the password
}

int main() {
    srand(time(NULL)); // Seed the random number generator

    char target_password[PASSWORD_LENGTH + 1];
    generate_password(target_password);
    printf("Target Password: %s\n", target_password);

    char candidate_password[PASSWORD_LENGTH + 1];
    while (strcmp(candidate_password, target_password) != 0) {
        generate_password(candidate_password);
        printf("Trying Password: %s\n", candidate_password);
    }

    printf("Valid Password Found: %s\n", candidate_password);

    return 0;
}
