/*
Name: Vishnu Vignesh
Roll No.: CH.EN.U4CYS21093
*/

#include <stdio.h>

int main() {
    float l, b, area, peri;

    printf("Length and Breadth of the rectangle = ");
    scanf("%f %f", &l, &b);

    // Calculate Area and Perimeter
    area = l * b;
    peri = 2 * l + 2 * b;
    printf("Area = %.2f cm^2\nPerimeter = %.2f cm\n", area, peri);

    // Conditional Statements to find out which value is greater
    if(area > peri) {
        printf("The Area is greater than the Perimeter.");
    }

    else if (peri > area) {
        printf("The Perimeter is greater than the Area.");
    }

    else if (area == peri) {
        printf("Both the Area and the Perimeter are the same.");
    }

    return 0;
}