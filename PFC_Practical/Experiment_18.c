#include <stdio.h>

int main() {
    int price;       
    int i;
    float total = 0;      

    for(i = 1; i <= 5; i++) {
        printf("\nEnter price of item %d: ",i);
        scanf("%d", &price ); 
        total = total + price;
    }

    printf("\nTotal Bill = %0.2f", total);
    
    return 0;
}
