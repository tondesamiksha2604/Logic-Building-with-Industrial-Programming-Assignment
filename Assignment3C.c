//write a program which accepet number from user and print even factors of that number
#include<stdio.h>
int main()
void DisplayEvenFactor(int iNo)
{
    int i=0;
    if(iNO<=0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo;i++)
    {
        if(iNo % i == 0 && i % 2 == 0)
        {
             printf("%d ", i);

        }
    }
}
{
    int iValue=0;
    printf("enter number\n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;

}