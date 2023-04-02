#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

int main() {
    FILE *file;
    char file_name[MAX_LINE_LENGTH], search_string[MAX_LINE_LENGTH];
    char line[MAX_LINE_LENGTH];
    char *pos;
    printf("Enter the name of the file: ");
    scanf("%s", file_name);
    printf("Enter the search string: ");
    scanf("%s", search_string);
    file = fopen(file_name, "r");
    if (file == NULL) {
        printf("Error: could not open file\n");
        return 1;
    }
    while (fgets(line, sizeof(line), file)) {
        if ((pos = strstr(line, search_string)) != NULL) {
            printf("%s", line);
        }
    }
    fclose(file);
    
    return 0;
}
