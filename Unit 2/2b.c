#include <stdio.h>

int main() {
    int num, one, ten, hun, tho, tth, rev;

    printf("Enter the number = ");
    scanf("%d", &num);

    one = num % 10;
    ten = (num/10) % 10;
    hun = (num/100) % 10;
    tho = (num/1000) % 10;
    tth = num/10000;
    
    rev = one*10000 + ten*1000 + hun*100 + tho*10 + tth;
    printf("Reversed = %d", rev);

    return 0;
}

/* 
#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter the number = ");
    scanf("%d", &num);

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed = %d", reversed);

    return 0;
}
*/