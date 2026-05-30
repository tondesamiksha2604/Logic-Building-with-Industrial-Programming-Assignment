//write a program which accept numbr from user and display its factor in decreising oder

#include<stdio.h>
int FactRev(int iNo)
{
    int iCount=0;
   
    if(iNo<=0)
    {
        iNo=-iNo;

    }
    for(iCount = iNo; iCount >= 1; iCount--)
    {
        if(iNo % iCount == 0)
        {
            printf("%d ", iCount);
        }
    }


}
int main()
{
    int iValue=0;
  

    printf("enter number :\n");
    scanf("%d",&iValue);


    DisplayFactRev(iValue);
   
    return 0;
}