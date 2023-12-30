/*
Name: Vishnu Vignesh
Roll No.: CH.EN.U4CYS21093
*/

#include <stdio.h>

int main() {
    int x1, x2, x3;
    int y1, y2, y3;

    // Input
    printf("(x1 y1) = ");
    scanf("%d %d", &x1, &y1);
    printf("(x2 22) = ");
    scanf("%d %d", &x2, &y2);
    printf("(x3 x3) = ");
    scanf("%d %d", &x3, &y3);

    // Check if the points lie on the same line
    if(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2) == 0) {
        printf("The points are collinear and lie on the same line.");
    }

    else {
        printf("The points are not collinear.");
    }

    return 0;
}