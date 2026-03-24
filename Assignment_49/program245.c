
/*
Input Linked list : |11|-> |22|-> |-28|-> |-101|-> |111|-> |10|->|NULL|
Total number of nodes are : 6
 Number of the two digit numbers are :  4
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertFirst(PPNODE First,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn -> next = *First;
        *First = newn;
    }

}

void InsertLast(PPNODE First ,int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = no;
    newn ->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First ;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }

}

void Display(PNODE first)
{
    printf("\nInput Linked list :");
    while(first != NULL)
    {

        printf(" |%d|->",first ->data);
        first = first -> next;
    }
    printf("|NULL|\n");
}

int Count(PNODE first)
{
    int iCount = 0;
    while((first)  != NULL)
    {
        iCount++;
        first = first -> next;
    }
    return iCount;
}

int CountTwoDigits(PNODE first)
{
    int iCount = 0,temp = 0;

    while(first != NULL)
    {
        temp = first -> data;
        if( temp < 0)
        {
            temp = -(temp);
        }
        if(temp >= 10 && temp <= 99)
        {
             iCount++;
        }
        first  = first -> next;
    }
    return iCount;
    printf("\n");
   
  
}


int main()
{
    int iRet = 0;
    PNODE head = NULL;
    bool bRet =  false;

    InsertLast(&head,11);
    InsertLast(&head,22);
    InsertLast(&head,-28);
    InsertLast(&head,-101);
    InsertLast(&head,111);
    InsertLast(&head,10);

    Display(head);
    iRet =  Count(head);
    printf("Total number of nodes are : %d\n",iRet);

    iRet = CountTwoDigits(head);
    printf(" Number of the two digit numbers are :  %d \n",iRet);

    

    return 0;
}