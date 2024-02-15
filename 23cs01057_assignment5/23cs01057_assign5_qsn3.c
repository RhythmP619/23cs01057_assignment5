#include <stdio.h>

int main(){
    int no; printf("Enter the number: "); scanf("%d", &no);
    int count = 0;
    int arr[5];
    int i = 1;
    while(no){
        arr[i++] = no % 10;
        no /= 10;
    } 
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= 4; j++){
            for (int k = 1; k <= 4; k++){
                for (int l = 1; l <= 4; l++){
                    if (l == k || l == j || l == i || k == j || k == i || i == j){
                        continue;
                    } else {
                        printf("%d%d%d%d\n", arr[i], arr[j], arr[k], arr[l]);
                        count++;
                    }
                }
            }
        }
    }
    printf("%d\n", count);
}