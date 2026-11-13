#include <stdio.h>

int main() {
    float basic, hra, da, ta, pf, gross, net;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.50;
    ta = basic * 0.10;
    pf = basic * 0.12;

    gross = basic + hra + da + ta;
    net = gross - pf;

    printf("\n--- Salary Details ---\n");
    printf("Basic Salary : %.2f\n", basic);
    printf("HRA          : %.2f\n", hra);
    printf("DA           : %.2f\n", da);
    printf("TA           : %.2f\n", ta);
    printf("Gross Salary : %.2f\n", gross);
    printf("PF Deduction : %.2f\n", pf);
    printf("Net Salary   : %.2f\n", net);

    return 0;
}
