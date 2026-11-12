#include <stdio.h>

int main(){
    int n , remainder, original, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0){
        remainder = n%10;
        sum =sum+(remainder*remainder*remainder);
        n = n/10;
    }if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;

}