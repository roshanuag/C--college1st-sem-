#include <stdio.h>
void print();
void display();
int main(){
    print();
    printf("I m in main function\n");
}
void print(){
    printf("I m in print function\n");
    display();
}
void display(){
    printf("I m in display function\n");
}