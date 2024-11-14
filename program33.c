#include<stdio.h>

void display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}



int main()
{
    int iFrequency = 0;

    printf("Enter the Frequency :\n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
    
}
 