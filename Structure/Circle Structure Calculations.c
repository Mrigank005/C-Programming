#include <stdio.h>

// Define the structure "Circle"
struct Circle {
    double radius;
};

// Function to calculate the area of a circle
double calculateArea(struct Circle c) {
    return 3.14159 * c.radius * c.radius; // Manually define the value of pi
}

// Function to calculate the perimeter (circumference) of a circle
double calculatePerimeter(struct Circle c) {
    return 2 * 3.14159 * c.radius; // Manually define the value of pi
}

int main() {
    // Declare variables to store details for two circles
    struct Circle circle1, circle2;

    // Input details for the first circle
    printf("Input details for Circle 1:\n");
    printf("Radius: ");
    scanf("%lf", &circle1.radius);

    // Input details for the second circle
    printf("\nInput details for Circle 2:\n");
    printf("Radius: ");
    scanf("%lf", &circle2.radius);

    // Calculate and display the area and perimeter for Circle 1
    printf("\nCircle 1:\n");
    printf("Area: %.2lf\n", calculateArea(circle1));
    printf("Perimeter: %.2lf\n", calculatePerimeter(circle1));

    // Calculate and display the area and perimeter for Circle 2
    printf("\nCircle 2:\n");
    printf("Area: %.2lf\n", calculateArea(circle2));
    printf("Perimeter: %.2lf\n", calculatePerimeter(circle2));

    return 0;
}
