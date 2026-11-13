#include <stdio.h>

int main()
{
    int n, i, j;
    int a = 1, b = 1, next;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= a; j++)
        {
            printf("* ");
        }
        printf("\n");

        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
