#include <stdio.h>

int digi(int no);

int main(){
    int no; printf("Enter the number: "); scanf("%d", &no);

    int nod = digi(no);
    printf("The number of digits: %d\n", nod);

    int digits[nod];
    int freq[10] = {0};
    
    for (int i = 0; i < nod; i++){
        digits[i] = no % 10;
        freq[digits[i]]++;
        no /= 10;
    }
    int sum = 0;

    for (int i = 0; i < 10; i++){
        if (freq[i] >= 1){
            sum += i;
        }
    }
    printf("The sum of all unique digits present: %d\n", sum);
}

int digi(int no){
    int nod = 0;
    while(no){
        nod++;
        no /= 10;
    }
    return nod;
}
