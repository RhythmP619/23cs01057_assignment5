#include <stdio.h>

int main()
{
    int sum = 0;
    while (1)
    {
        int no;
        printf("Provide the number: ");
        scanf("%d", &no);
        if (no % 2 == 0)
        {
            sum += no;
        }
        char response;
        printf("Do you want to continue: ");
        getchar();
        scanf("%c", &response);
        while (response != 'N' && response != 'n' && response != 'Y' && response != 'y')
        {
            printf("Not a valid input. \n");
            getchar();
            scanf("%c", &response);
        }
        if (response == 'N' || response == 'n')
        {
            break;
        }
    }
    printf("The sum is: %d\n", sum);
}