
/*
Input Linked list : |110|-> |111|-> |101|-> |28|-> |22|-> |11|->|NULL|
Total number of nodes are : 6
Output : 160
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

int AdditionEven(PNODE first)
{
    int iCnt = 0; // Important 

    int iSize = 0;
    int iSum = 0;

    while(first != NULL)
    {
        if((first -> data) % 2 == 0)
        {
            iSum = iSum + first -> data;
        }

        first = first -> next;
    }
    return iSum;
    
}
int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head,11);
    InsertFirst(&head,22);
    InsertFirst(&head,28);
    InsertFirst(&head,101);
    InsertFirst(&head,111);
    InsertFirst(&head,110);

    Display(head);
    iRet =  Count(head);
    printf("Total number of nodes are : %d\n",iRet);

    iRet = AdditionEven(head);

     
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