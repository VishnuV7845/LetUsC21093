#include <stdio.h>

// For 5 digits only.
int main() {
    int num, one, ten, hun, tho, tth, sum;

    printf("Enter the number = ");
    scanf("%d", &num);

    one = num % 10;
    ten = (num/10) % 10;
    hun = (num/100) % 10;
    tho = (num/1000) % 10;
    tth = num/10000;

    sum = one + ten + hun + tho + tth;
    printf("Sum of the digits = %d.", sum);

    return 0;
}

/* For any number of digits.
int main() {
    int n, sum = 0, m;

    printf("Number = ");
    scanf("%d", &n);

    while(n>0) {
        m = n%10;
        sum = sum+m;
        n = n/10;
    }

    printf("Sum of digits = %d", sum);
    return 0;
} */