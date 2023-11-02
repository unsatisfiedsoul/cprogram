#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COMMAND_LENGTH 100

void executeCommand(char *command) {
    printf("Executing command: %s\n", command);
	if(strcmp(command,"whois")==0){    
system(command);}
// Implement the execution of the command here
    // You can use system() or exec() family of functions to execute system commands
}

int main() {
    char input[MAX_COMMAND_LENGTH];
    
    while (1) {
        printf("Shell > ");
        fgets(input, MAX_COMMAND_LENGTH, stdin);
        input[strcspn(input, "\n")] = '\0'; // Remove the trailing newline
        
        if (strcmp(input, "exit") == 0) {
            printf("Exiting shell.\n");
            break;
        }

        executeCommand(input);
    }

    return 0;
}
