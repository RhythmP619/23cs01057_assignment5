#include <stdio.h>

int main(){
    int height; printf("Enter the height: "); scanf("%d", &height);

    for (int row = 1; row <= height; row++){
        for (int space = 1; space <= height - row; space++){
            printf(" ");
        }
        for (int star = 1; star <= row; star++){
            printf("* ");
        }
        printf("\n");
    }   
}