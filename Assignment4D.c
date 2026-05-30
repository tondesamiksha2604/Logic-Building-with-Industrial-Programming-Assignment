#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCount = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCount = 1; iCount < iNo; iCount++)
    {
        if(iNo % iCount != 0)
        {
            iSum = iSum + iCount;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d\n",iRet);

    return 0;
}