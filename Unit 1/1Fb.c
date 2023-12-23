#include <stdio.h>

int main() {
    int km, m, f, in, cm;

    printf("Distance in kilometres = ");
    scanf("%d", &km);

    m = km * 1000;
    f = km * 3280;
    in = km * 39370;
    cm = km * 100000;

    printf("In metres = %d\n", m);
    printf("In feet = %d\n", f);
    printf("In inches = %d\n", in);
    printf("In centimetres = %d\n", cm);

    return 0;
}