
/*
Input Linked list : |11|-> |22|-> |28|-> |101|-> |111|-> |110|->|NULL|
Total number of nodes are : 6
First Occurence of the given number  :  1
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
    printf("Input Linked list :");
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

int FirstOccur(PNODE first,int no)
{
   int iPos = 1;

    while(first  != NULL)
    {

        if((first -> data) == no)
        {
          return iPos;
        }
        first = first -> next ;
        iPos++;
    }
    return -1;
  
}
int main()
{
    int iRet = 0;
    PNODE head = NULL;
    bool bRet =  false;

    InsertLast(&head,11);
    InsertLast(&head,22);
    InsertLast(&head,28);
    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,110);

    Display(head);
    iRet =  Count(head);
    printf("Total number of nodes are : %d\n",iRet);

    iRet = FirstOccur(head,11);

    if(iRet != -1)
    {
        printf("First Occurence of the given number  :  %d\n",iRet);
    }
    else
    {
        printf("Invalid output\n");
    }

    return 0;
}