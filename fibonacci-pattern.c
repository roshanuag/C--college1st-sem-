#include <stdio.h>

int main() {
    int n, i, j;
    int a = 1, b = 1, next;   /* series 0 1 1 2 3 5 ... (0 skipped: a 0-star row is blank) */

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        /* print 'a' stars on this row */
        for(j = 1; j <= a; j++) {
            printf("* ");
        }
        printf("\n");

        /* move to the next Fibonacci term */
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
