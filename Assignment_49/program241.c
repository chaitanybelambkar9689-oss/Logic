
/*
Input Linked list : |11|-> |22|-> |-28|-> |-101|-> |111|-> |11|->|NULL|
Total number of nodes are : 6
Summation of two between the maximum and minimum nodes are : 212
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

int Difference(PNODE first)
{
    int iMax = 0,iMin = 0;
    int temp = 0;



    iMin = 1;

    while(first != NULL)
    {
        if(first -> data  > iMax  )
        {
            iMax = first ->data;
        }

        if(first -> data < iMin)
        {
            iMin = first -> data;
        }

        first = first -> next;
        
    }
    return iMax -iMin;
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

    iRet = Difference(head);
    printf("Summation of two between the maximum and minimum nodes are : %d\n",iRet);

    return 0;
}