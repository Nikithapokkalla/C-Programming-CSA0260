#include <stdio.h>
#include <string.h>

int main() {
    FILE *input_file, *error_file;
    char line[256];
    input_file = fopen("input.txt", "r");
    error_file = fopen("error_log.txt", "w");
    if (input_file == NULL || error_file == NULL) {
        printf("Error: could not open file\n");
        return 1;
    }
    while (fgets(line, sizeof(line), input_file)) {
        if (strstr(line, "error") != NULL) {
            fprintf(error_file, "%s", line);
        }
    }
    fclose(input_file);
    fclose(error_file);
    error_file = fopen("error_log.txt", "r");
    if (error_file == NULL) {
        printf("Error: could not open file\n");
        return 1;
    }
    printf("Error Log Contents:\n");
    while (fgets(line, sizeof(line), error_file)) {
        printf("%s", line);
    }
    fclose(error_file);
    
    return 0;
}
