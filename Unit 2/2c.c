#include <stdio.h>
#include <math.h>

int main() {
    float s1, s2, s3, semi, area;

    printf("Side 1 = ");
    scanf("%f", &s1);
    printf("Side 2 = ");
    scanf("%f", &s2);
    printf("Side 3 = ");
    scanf("%f", &s3);

    semi = (s1 + s2 + s3) / 2;
    area = sqrt(semi * (semi - s1) * (semi - s2) * (semi - s3));
    printf("Area = %.2f", area);

    return 0;
}