#include <stdio.h>
#include <math.h>

void calculations(double a, double b, double c);

int main() {
    double a, b, c;

    printf("Enter the three sides of a triangle: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input! Please enter numbers.\n");
        return 1;
    }
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Sides must be positive numbers greater than zero!\n");
    }
    else if (a + b <= c || a + c <= b || b + c <= a) {
        printf("These sides cannot form a valid triangle!\n");
    } 
    else {
        calculations(a, b, c);
    }    
    return 0;
}
void calculations(double a, double b, double c) {
    double s, Area;
    s = (a + b + c) / 2.0;
    Area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of triangle with sides %.2lf, %.2lf, %.2lf is %.2lf\n", a, b, c, Area);
}