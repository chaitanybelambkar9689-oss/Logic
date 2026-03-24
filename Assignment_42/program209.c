/*
Input Linked list : |11|-> |111|-> |101|-> |51|-> |21|-> |11|->|NULL|
Total number of nodes are : 6
Output : 111
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

int Maximum(PNODE first)
{
    int iMax = 0;

    while(first != NULL)
    {
        if((first -> data)  > iMax )
        {
            iMax = first -> data;
        }
        first = first -> next;
    }
    return iMax;
    
}
int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head,11);
    InsertFirst(&head,21);
    InsertFirst(&head,51);
    InsertFirst(&head,101);
    InsertFirst(&head,111);
    InsertFirst(&head,11);

    Display(head);
    iRet =  Count(head);
    printf("Total number of nodes are : %d\n",iRet);

    iRet = Maximum(head);

     
    if(iRet != -1)
    {
    printf("Output : %d",iRet);
    }
    else
    {
      printf("There is no such element\n");  
    }

    return 0;
}