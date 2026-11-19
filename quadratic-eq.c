#include <stdio.h>
#include <math.h>

void findroot(int a, int b, int c);

int main() {
    int a, b, c;
    printf("Enter the value of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    findroot(a, b, c);
    return 0;
}

void findroot(int a, int b, int c) {
    if (a == 0) {
        printf("Invalid input: 'a' cannot be 0 for a quadratic equation.\n");
        return;
    }

    float root1, root2, disc;
    disc = (b * b) - (4 * a * c);

    if (disc > 0) {
        root1 = (-b + sqrt(disc)) / (2.0f * a);
        root2 = (-b - sqrt(disc)) / (2.0f * a);
        printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
    } 
    else if (disc == 0) {
        root1 = -b / (2.0f * a);
        printf("Roots are real and equal: %.2f and %.2f\n", root1, root1);
    } 
    else {
        float realPart = -b / (2.0f * a);
        float imagPart = sqrt(-disc) / (2.0f * a);
        printf("Roots are complex:\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }
}