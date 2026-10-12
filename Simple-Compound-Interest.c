#include <stdio.h>
#include <math.h>
int main()
{

    float rate, time, principal, simple_interest, compound_interest;
    printf("Enter Rate Time and Principal:");
    scanf("%f%f%f", &rate, &time, &principal);

    simple_interest = (principal * rate * time) / 100.0;
    compound_interest = (principal * pow((1.0 + rate / 100.0), time)) - principal;

    printf("Simple interest is: %.2f\n", simple_interest);
    printf("Compound interest is: %.2f\n", compound_interest);

    return 0;
}