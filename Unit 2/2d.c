#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    double r, phi;

    printf("Cartesian Coordinates (x, y) = ");
    scanf("%d %d", &x, &y);

    r = sqrt(x * x + y * y);
    phi = atan2(y, x);

    printf("Polar Coordinates (r, phi) = (%.2f, %.2f radians)", r, phi);

    return 0;
}
