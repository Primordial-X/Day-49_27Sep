#include <stdio.h>
#include <string.h>

//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

int main() {
    char name[50];
    printf("Enter your full name: ");
    fgets(name, sizeof(name) - 1, stdin);

    // Remove the newline character if present
    name[strcspn(name, "\n")] = 0;

    // Print initials
    for (int i = 0; i < strlen(name); i++) {
        if (i == 0 || name[i - 1] == ' ') {
            printf("%c.", toupper(name[i]));
        }
    }
    printf("\n");
    return 0;
}



//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

int main() {
    char name[50];
    printf("Enter your full name: ");
    fgets(name, sizeof(name) - 1, stdin);

    // Remove the newline character if present
    name[strcspn(name, "\n")] = 0;

    // Print initials and surname
    for (int i = 0; i < strlen(name); i++) {
        if (i == 0 || name[i - 1] == ' ') {
            printf("%c.", toupper(name[i]));
        }
    }

    // Find the last space to print the surname
    char *last_space = strrchr(name, ' ');
    if (last_space != NULL) {
        printf(" %s", last_space + 1);
    }
    
    printf("\n");
    return 0;
}