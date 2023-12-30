/*
Name: Vishnu Vignesh
Roll No.: CH.EN.U4CYS21093
*/

#include <stdio.h>

int main() {
    int s1, s2, s3;

    printf("Angles of the triangle (s1, s2, s3) = ");
    scanf("%d %d %d", &s1, &s2, &s3);

    // Check if sum is equal to 180
    if(s1 > 0 && s2 > 0 && s3 > 0 && s1 + s2 + s3 == 180) {
        printf("This is a valid triangle.");
    }

    else {
        printf("This is not a valid triangle.");
    }

    return 0;
}