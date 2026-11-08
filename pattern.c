#include <stdio.h>

int main(){
    int n, i, j;
    printf("Enter the size of the star: ");
    scanf("%d", &n);

    int gap = n / 3;          // row where the upside-down triangle starts
    int height = n + gap;     // total number of rows
    int width = 2 * n - 1;    // total number of columns
    int mid = n - 1;          // middle column

    for(i = 0; i < height; i++){
        for(j = 0; j < width; j++){
            int dist = j - mid;           // distance from the middle column
            if(dist < 0) dist = -dist;

            // inside the upward triangle (pointing up)?
            int up = (i < n) && (dist <= i);
            // inside the downward triangle (pointing down)?
            int down = (i >= gap) && (dist <= height - 1 - i);

            if(up || down)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
