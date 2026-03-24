

/*
Input Linked list : |11|-> |22|-> |-28|-> |-101|-> |111|-> |11|->|NULL|
Total number of nodes are : 6

 Nodes greater than average :
 |22| -> |111| -> |NULL|
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

void DisplayGreaterThanAvg(PNODE first)
{
    int iSum = 0;
    int iSize = 0,iAverage = 0;
    PNODE temp = first;

    iSize = Count(first);


    while(temp != NULL)
    {
        iSum  = iSum + first ->data;
        temp =  temp -> next; 
    }  

    iAverage = iSum /iSize;
    temp = first;

    while(temp != NULL)
    {
        if((temp ->data) > iAverage)
        {
            printf("|%d| -> ",temp ->data);
        }
        temp = temp -> next;
    }
    printf("|NULL|\n");

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
    InsertLast(&head,11);

    Display(head);
    iRet =  Count(head);
    printf("Total number of nodes are : %d\n",iRet);

    printf("\n Nodes greater than average : \n ");
    DisplayGreaterThanAvg(head);

    return 0;
}