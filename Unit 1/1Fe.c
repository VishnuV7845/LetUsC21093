#include <stdio.h>

int main() {
    float l, b, r, arec, prec, acirc, ccirc;

    printf("Length and Breadth of the Rectangle = ");
    scanf("%f %f", &l, &b);
    arec = l*b;
    prec = 2.0*l+2.0*b;
    printf("Area of the Rectangle = %.2f\nPerimeter of the Rectangle = %.2f\n\n", arec, prec);

    printf("Radius of the Circle = ");
    scanf("%f", &r);
    acirc = 3.14*r*r;
    ccirc = 2*3.14*r;
    printf("Area of the Circle = %.2f\nCircumference of the Circle = %.2f\n", acirc, ccirc);

    return 0;
}