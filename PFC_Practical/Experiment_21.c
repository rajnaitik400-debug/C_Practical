#include <stdio.h>

int main() {
    float dist, total = 0;
    int i;

    for(i = 1; i <= 30; i++) {
        printf("Enter distance walked on day %d (km): ", i);
        scanf("%f", &dist);
        total += dist;
    }

    printf("\nTotal distance walked = %0.2f km", total);
    return 0;
}
