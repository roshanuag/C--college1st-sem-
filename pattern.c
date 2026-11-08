#include <stdio.h>

int main(){
    int n, i, j;
    printf("Enter the size of the star: ");
    scanf("%d", &n);

    int gap = n / 3;
    int height = n + gap;
    int width = 2 * n - 1;
    int mid = n - 1;

    for(i = 0; i < height; i++){
        for(j = 0; j < width; j++){
            int dist = j - mid;
            if(dist < 0) dist = -dist;

            int up = (i < n) && (dist <= i);
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
