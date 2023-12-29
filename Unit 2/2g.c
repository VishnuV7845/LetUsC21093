#include <stdio.h>
#include <math.h>

int main() {
    double angle_degrees;
    double pi = 3.14;
    
    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle_degrees);
    
    double angle_radians = angle_degrees * (pi / 180.0);
    
    double sin_value = sin(angle_radians);
    double cos_value = cos(angle_radians);
    double tan_value = tan(angle_radians);
    
    printf("Sine of %.2lf degrees is: %.4lf\n", angle_degrees, sin_value);
    printf("Cosine of %.2lf degrees is: %.4lf\n", angle_degrees, cos_value);
    
    if (angle_degrees == 90 || angle_degrees == 270) {
        printf("Tangent of %.2lf degrees is undefined.\n", angle_degrees);
    } else {
        printf("Tangent of %.2lf degrees is: %.4lf\n", angle_degrees, tan_value);
    }
    
    return 0;
}
