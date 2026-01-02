#include <stdio.h>

int main() {
    int att, present = 0, i;

    for(i = 1; i <= 30; i++) {
        printf("Day %d (1=Present, 0=Absent): ", i);
        scanf("%d", &att);
        if(att == 1)
            present++;
    }

    printf("\nTotal present days = %d", present);
    return 0;
}
