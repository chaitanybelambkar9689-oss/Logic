#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iNo ; iCnt++)
    {
        if((iCnt %2 ) == 0)
        {
            printf(" * \t");
        }
        else
        {
            printf("%d \t",((iCnt/2)+1));
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter no of elements");
    scanf("%d %d",&iValue);

    Pattern(iValue);
    return 0;
}