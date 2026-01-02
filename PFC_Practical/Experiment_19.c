#include <stdio.h>

int main() {
    int unit;       
    int i, total = 0;      

    for(i = 1; i <= 7; i++) {
        printf("Enter unit used on day %d: ",i);
        scanf("%d", &unit ); 
        total = total + unit;
    }

    printf("\nTotal electricity units used in a week = %d\n", total);
    
    return 0;
}
