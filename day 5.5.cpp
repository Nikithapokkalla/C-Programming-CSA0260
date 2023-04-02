#include <stdio.h>
#include <ctype.h>

#define NUM_LETTERS 26

int main() {
    FILE *input_file, *output_file;
    char ch;
    int letter_count[NUM_LETTERS] = {0};
    int i;
    input_file = fopen("data.txt", "r");
    output_file = fopen("statistics.txt", "w");
    if (input_file == NULL || output_file == NULL) {
        printf("Error: could not open file\n");
        return 1;
    }
    while ((ch = fgetc(input_file)) != EOF) {
        if (isalpha(ch)) {
            letter_count[tolower(ch) - 'a']++;
        }
    }
    for (i = 0; i < NUM_LETTERS; i++) {
        fprintf(output_file, "%c: %d\n", 'a' + i, letter_count[i]);
    }
    fclose(input_file);
    fclose(output_file);
    
    return 0;
}
