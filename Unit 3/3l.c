/*
Name: Vishnu Vignesh
Roll No.: CH.EN.U4CYS21093
*/

#include <stdio.h>

int main() {
    float x, y;

    printf("Enter the coordinates (x y) of the point: ");
    scanf("%f %f", &x, &y);

    // Check if the point lies on X axis, or Y axis, or on the Origin
    if (x == 0 && y == 0) {
        printf("The point is at the origin.\n");
    } else if (x == 0) {
        printf("The point is on the Y-axis.\n");
    } else if (y == 0) {
        printf("The point is on the X-axis.\n");
    } else {
        printf("The point is neither on the X-axis, Y-axis, nor at the origin.\n");
    }

    return 0;
}
