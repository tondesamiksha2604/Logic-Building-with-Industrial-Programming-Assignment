//write a program which accept number from user and display its multiplication of factors

#include<stdio.h>
int MultFact(int iNo)
{
    int iCount=0;
    int imult=1;

    if(iNo<=0)
    {
        iNo = - iNo;

    }
    for(iCount=1;iCount<=iNo;iCount++)
    {
        if(iNo % iCount == 0)
        {
           imult=imult*iCount;
        }
    }

    return imult;

}

int main()
{
    int iValue=0;
    int iRet =0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);

    printf("%d",iRet);
    return 0;

}