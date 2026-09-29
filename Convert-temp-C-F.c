#include <stdio.h>

int main(){
    float celsius , fahrenheit;

    printf("Enter temperature in celsius: ");
    scanf("%f",&celsius);

    fahrenheit = (celsius*(9.0/5.0)+32.0);

    printf("%.2f celsius = %.2f fahrenheit\n",celsius, fahrenheit);
    return 0 ;

}

