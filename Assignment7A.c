#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        printf("* ");
    }

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        printf("# ");
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