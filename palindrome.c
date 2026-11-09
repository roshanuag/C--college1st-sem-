#include <stdio.h>

int main(){
    int n = 0, reverse = 0 , remainder, original;
    printf("Enter number n: ");
    scanf("%d",&n);
    original=n;

    while(n>0){
        remainder = n%10;
        reverse = (reverse*10)+remainder;
        n=n/10;

    }
    if(reverse==original){
        printf("Palindrome\n");

    }else{printf("Not");}

return 0; 
}