#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a file name and its extension: ");
    scanf("%99s", str);

    // Step 1: Open the file
    FILE *file = fopen(str, "r");  // Correctly use the file name from str and the mode "r"
    if (file == NULL) {
        // Handle error if the file cannot be opened
        perror("Error opening file");
        return 1;
    }

    // Step 2: Read and process the file
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  // Print each character to the console
    }

    // Step 3: Close the file
    fclose(file);

    return 0;
}
