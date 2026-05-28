//Write a program which Accept one number from user and print that number of even numbers on screen
#include<stdio.h>
void PrintEven(int iNo)
{
    int iCnt = 1;
    int iEvenCount = 0;
    if(iNo<=0)
    {
        return;

    }
    
     while(iEvenCount < iNo)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d ", iCnt);
            iEvenCount++;
        }

        iCnt++;
    }
}

int main()
{
    int iValue=0;
    printf("enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}