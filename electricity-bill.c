#include <stdio.h>

int main() {
    int units;
    float amt, surcharge, total;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        amt = units * 0.50;
    } else if (units <= 150) {
        amt = 25 + ((units - 50) * 0.75);
    } else if (units <= 250) {
        amt = 100 + ((units - 150) * 1.20);
    } else {
        amt = 220 + ((units - 250) * 1.50);
    }

    surcharge = amt * 0.20;
    total = amt + surcharge;

    printf("\n---- Electricity Bill ----\n");
    printf("Base Amount : %.2f\n", amt);
    printf("Surcharge   : %.2f\n", surcharge);
    printf("Total Bill  : %.2f\n", total);

    return 0;
}
