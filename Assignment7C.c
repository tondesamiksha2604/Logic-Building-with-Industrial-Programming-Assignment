#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCount = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCount = iNo; iCount >= 1; iCount--)
    {
        if(iCount % 2 == 0)
        {
            iFact = iFact * iCount;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}