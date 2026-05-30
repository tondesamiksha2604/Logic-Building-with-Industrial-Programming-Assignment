#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCount = 0;

    for(iCount = 1; iCount <= 5; iCount++)
    {
        printf("%d ",iNo * iCount);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}