#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCount = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCount = iNo; iCount >= 1; iCount--)
    {
        if(iCount % 2 == 0)
        {
            iEvenFact = iEvenFact * iCount;
        }
        else
        {
            iOddFact = iOddFact * iCount;
        }
    }

    return (iEvenFact - iOddFact);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}