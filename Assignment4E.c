#include<stdio.h>

int FactDiff(int iNo)
{
    int iCount = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCount = 1; iCount < iNo; iCount++)
    {
        if(iNo % iCount == 0)
        {
            iFactSum = iFactSum + iCount;
        }
        else
        {
            iNonFactSum = iNonFactSum + iCount;
        }
    }

    return (iFactSum - iNonFactSum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d\n",iRet);

    return 0;
}