#include <stdio.h>

int main() {
    int c, d, temp;

    printf("Numbers to be swapped (C D) = ");
    scanf("%d %d", &c, &d);

    temp = c;
    c = d;
    d = temp;
    printf("After swapping, C is %d and D is %d.", c, d);

    return 0;
}