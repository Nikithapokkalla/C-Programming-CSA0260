#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

int main() {
    FILE *input_file, *output_file;
    char line[MAX_LINE_LENGTH];
    char *pos;
    input_file = fopen("input.txt", "r");
    output_file = fopen("output.txt", "w");
    if (input_file == NULL || output_file == NULL) {
        printf("Error: could not open file\n");
        return 1;
    }
    while (fgets(line, sizeof(line), input_file)) {
        while ((pos = strstr(line, "red")) != NULL) {
            strncpy(pos, "blue", 4);
            pos += 4;
        }
        fprintf(output_file, "%s", line);
    }
    fclose(input_file);
    fclose(output_file);
    
    return 0;
}
