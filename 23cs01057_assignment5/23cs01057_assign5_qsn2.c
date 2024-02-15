#include <stdio.h>

int main(){
    int divident, divisor; printf("Enter the Divident and Divisor: "); scanf("%d %d", &divident, &divisor);
    int quot = 0, rem;
    while(divident - divisor > 0){
        divident -= divisor;
        quot++;
    }
    rem = divident;
    printf("Quotient: %d\n", divident);
    printf("Remainder: %d\n", rem);
}