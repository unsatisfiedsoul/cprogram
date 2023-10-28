#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int checkCredentials(const char *inputUsername, const char *inputPassword) {
    FILE *file = fopen("credentials.txt", "r");
    if (file == NULL) {
        perror("Error opening the credentials file");
        return 0;
    }

    char storedUsername[MAX_LENGTH];
    char storedPassword[MAX_LENGTH];

    while (fgets(storedUsername, sizeof(storedUsername), file) && fgets(storedPassword, sizeof(storedPassword), file)) {
        // Remove the newline character from storedUsername and storedPassword
        storedUsername[strcspn(storedUsername, "\n")] = '\0';
        storedPassword[strcspn(storedPassword, "\n")] = '\0';

        if (strcmp(inputUsername, storedUsername) == 0 && strcmp(inputPassword, storedPassword) == 0) {
            fclose(file);
            return 1; // Credentials match
        }
    }

    fclose(file);
    return 0; // No match found
}

int main() {
    char username[MAX_LENGTH];
    char password[MAX_LENGTH];

    printf("Login App\n");
    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0'; // Remove the newline character

    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0'; // Remove the newline character

    if (checkCredentials(username, password)) {
        printf("Login successful!\n");
    } else {
        printf("Login failed. Please check your credentials.\n");
    }

    return 0;
}

