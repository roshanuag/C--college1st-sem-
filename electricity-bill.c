#include <stdio.h>

int main() {
    int units;
    float amount, surcharge, total;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        amount = units * 0.50;
    } else if (units <= 150) {
        amount = 25 + ((units - 50) * 0.75);
    } else if (units <= 250) {
        amount = 100 + ((units - 150) * 1.20);
    } else {
        amount = 220 + ((units - 250) * 1.50);
    }

    surcharge = amount * 0.20;
    total = amount + surcharge;

    printf("\n--- Electricity Bill ---\n");
    printf("Base Amount : %.2f\n", amount);
    printf("Surcharge   : %.2f\n", surcharge);
    printf("Total Bill  : %.2f\n", total);

    return 0;
}
