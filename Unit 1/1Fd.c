#include <stdio.h>

int main() {
    float f, c;

    printf("Temperature in Fahrenheit = ");
    scanf("%f", &f);

    c = 5.0/9.0*(f-32);

    printf("Temperature in Degrees celsius = %.2f", c);
    return 0;
}