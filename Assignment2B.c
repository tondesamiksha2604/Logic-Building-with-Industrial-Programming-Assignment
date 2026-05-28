//Accept one number from user and print that number of * on Screen
#include<stdio.h>
void Display(int iNo)
{
    //write updater
    while(iNo>0)
    {
        printf("*\n");
        iNo--;
    }

}
int main()
{
    int iValue = 0;
    printf("enter number");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;



}