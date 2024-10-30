//C file operations
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void writeToFile() {
    char sentence[MAX_LEN];
    FILE *file = fopen("data.txt", "w");
    
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    
    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, MAX_LEN, stdin);
    
    fprintf(file, "%s", sentence);
    
    fclose(file);
}

void readFromFile() {
    char sentence[MAX_LEN];
    FILE *file = fopen("data.txt", "r");
    
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }
    
    while (fgets(sentence, MAX_LEN, file) != NULL) {
        printf("%s", sentence);
    }
    
    fclose(file);
}

void appendToFile() {
    char sentence[MAX_LEN];
    FILE *file = fopen("data.txt", "a");
    
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return;
    }
    
    printf("Enter a second sentence to append (up to 100 characters): ");
    fgets(sentence, MAX_LEN, stdin);
    
    fprintf(file, "%s", sentence);
    
    fclose(file);
}

int main() {
    int choice;
    
    do {
        printf("\nMenu:\n");
        printf("1. Write to file\n");
        printf("2. Read from file\n");
        printf("3. Append to file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character
        
        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
    
    return 0;
}
