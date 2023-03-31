#include <stdio.h>

#define PI 3.14159

float calculateDiameter(float radius);
float calculateCircumference(float radius);
float calculateArea(float radius);

int main() {
    float radius, result;
    int option;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Enter the option:\n");
    printf("1. Calculate diameter\n");
    printf("2. Calculate circumference\n");
    printf("3. Calculate area\n");
    scanf("%d", &option);

    switch(option) {
        case 1:
            result = calculateDiameter(radius);
            printf("Diameter = %.2f\n", result);
            break;
        case 2:
            result = calculateCircumference(radius);
            printf("Circumference = %.2f\n", result);
            break;
        case 3:
            result = calculateArea(radius);
            printf("Area = %.2f\n", result);
            break;
        default:
            printf("Invalid option\n");
            break;
    }

    return 0;
}

float calculateDiameter(float radius) {
    return 2 * radius;
}

float calculateCircumference(float radius) {
    return 2 * PI * radius;
}

float calculateArea(float radius) {
    return PI * radius * radius;
}
