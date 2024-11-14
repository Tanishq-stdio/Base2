#include<stdio.h>
                     //9
void DisplayFactors(int iNo)
{
    int iCnt = 0;

    printf("Factors of %d are : \n",iNo);
    //      1          2         3    
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {       //9  1
        if(iNo % iCnt == 0)     // 4
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}


// O(N/2)