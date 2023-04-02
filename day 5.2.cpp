#include <stdio.h>

struct record {
    int id;
    char name[20];
    float salary;
};

int main() {
    FILE *file;
    struct record record;
    file = fopen("data.bin", "rb");
    if (file == NULL) {
        printf("Error: could not open file\n");
        return 1;
    }
    while (fread(&record, sizeof(struct record), 1, file) == 1) {
        printf("ID: %d\n", record.id);
        printf("Name: %s\n", record.name);
        printf("Salary: $%.2f\n", record.salary);
        printf("\n");
    }
    
    fclose(file);
    
    return 0;
}
