#include <stdio.h>

int main(){
    int n , original , rem , reverse=0;

    printf("Enter the value of n:");
    scanf("%d",&n);

    original= n;
    while(n>0){
        rem =n%10;
        reverse=(reverse*10)+rem;
        n=n/10;
    }
    if(reverse==original){
        printf("It is a palindrome\n");
    }else{printf("Not palindrome\n");
    }
    return 0;
}