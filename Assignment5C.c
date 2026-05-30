#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;

    for(iCount = -iNo; iCount <= iNo; iCount++)
    {
        printf("%d ",iCount);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}