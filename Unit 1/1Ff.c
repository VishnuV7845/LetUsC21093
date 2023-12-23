#include <stdio.h>

int main() {
    int d[9], i;
    d[0] = 1189;
    d[1] = 841;

    for(i=1; i<9; i++) {
        d[i+1] = d[i-1]/2;
    }

    for(i=0; i<9; i++) {
        printf("A%d = %d x %d\n", i, d[i], d[i+1]);
    }

    return 0;
}