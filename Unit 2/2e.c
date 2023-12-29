#include <stdio.h>
#include <math.h>

int main() {
    float l1, l2, g1, g2, d;

    printf("Coordinates 1 (l1 g1): ");
    scanf("%f %f", &l1, &g1);
    printf("Coordinates 2 (l2 g2): ");
    scanf("%f %f", &l2, &g2);

    float pi = 3.14;
    l1 = l1 * (pi/180);
    l2 = l2 * (pi/180);
    g1 = g1 * (pi/180);
    g2 = g2 * (pi/180);

    d = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2-g1));
    printf("The distance is %.2f nautical miles.", d);

    return 0;
}