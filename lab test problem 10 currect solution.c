
#include<stdio.h>
int main()
{
    int i,j,AB,B,number;
    printf("Enter a number: ");
    scanf("%d", &B);
    number =1;

    for ( i = 0; i < B; i++)
    {
        AB = number;
        for (j = 0; j <= i; j++)
        {
            printf("%d ", AB);
            AB= AB/ 2;
        }

        printf("\n");
        number = number*2;
    }

    return 0;
}

