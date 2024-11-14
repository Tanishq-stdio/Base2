#include<stdio.d>

void Display(int iValue)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt>= 0 ; iCnt++)
    {
        printf("%d\n",iCnt);
    }

    printf("%d",&iCnt);
}

int main()
{
    int iFrequency = 0

    printf("Enter the Frequency \n");
    scanf("%d",&iFrequency)

    Display ();

    
    return 0;
}