#include <stdio.h>
#include <math.h>

int main() {
    float t, v, wcf;

    printf("Temperature: ");
    scanf("%f", &t);
    printf("Wind Velocity: ");
    scanf("%f", &v);
    
    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);
    printf("Wind Chill factor = %.2f", wcf);

    return 0;
}