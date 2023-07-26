#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char file_path[100];
    float num, sum = 0.0;

    printf("Enter the path of the file: ");
    scanf("%s", file_path);

    // Open the file in read mode ('r' mode)
    file = fopen(file_path, "r");
    if (file == NULL) {
        printf("Error: File not found or unable to open the file.\n");
        return 1;
    }

    // Read float values and calculate their sum
    while (fscanf(file, "%f", &num) == 1) {
        sum += num;
    }

    // Close the file
    fclose(file);

    printf("Sum of float values in the file: %.2f\n", sum);
    return 0;
}

