#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char cCnt = '\0';
    for(cCnt = 1;cCnt<=iNo;cCnt++)
    {
        printf("%c \t",cCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}