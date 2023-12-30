/*
Name: Vishnu Vignesh
Roll No.: CH.EN.U4CYS21093
*/

#include <stdio.h>
#include <math.h>

int main() {
    float x, y, x1, y1, r, distance;

    printf("Circle center coordinates (x y): ");
    scanf("%f %f", &x, &y);

    printf("Radius of the circle: ");
    scanf("%f", &r);

    printf("coordinates of the point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    // Calculate distance between the center and the point
    distance = sqrt(pow(x1 - x, 2) + pow(y1 - y, 2));

    // Compare the distance with the radius to determine the position of the point
    if (distance == r) {
        printf("The point is on the circle.\n");
    } else if (distance < r) {
        printf("The point is inside the circle.\n");
    } else {
        printf("The point is outside the circle.\n");
    }

    return 0;
}
