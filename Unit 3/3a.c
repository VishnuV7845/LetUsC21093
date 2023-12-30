/*
Name: Vishnu Vignesh
Roll No.: CH.EN.U4CYS21093
*/

#include <stdio.h>

int main() {
    float cp, sp, pro, loss, prop, lossp;

    printf("Cost Price = ");
    scanf("%f", &cp);
    printf("Selling Price = ");
    scanf("%f", &sp);

    // To calculate loss
    if(cp > sp) {
        loss = cp - sp;
        lossp = loss / cp * 100;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%", lossp);
    }

    // To calculate profit
    else if(sp > cp) {
        pro = sp - cp;
        prop = pro / cp * 100;
        printf("Profit = %.2f\n", pro);
        printf("Profit Percentage = %.2f%", prop);
    }
    
    // If both CP and SP are same
    else if(sp == cp) {
        printf("There is no profit or loss.");
    }

    return 0;
}