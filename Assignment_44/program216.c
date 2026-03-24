
/*
Input Linked list : |110|-> |111|-> |101|-> |28|-> |22|-> |11|->|NULL|
Total number of nodes are : 6
Given number is present
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

bool Search(PNODE first,int no)
{
    bool bFlag =  false;

    while(first  != NULL)
    {
        if(first -> data == no)
        {
            bFlag = true;
            break;
        }
        first = first -> next ;
    }
    return bFlag;
}
int main()
{
    int iRet = 0;
    PNODE head = NULL;
    bool bRet =  false;

    InsertFirst(&head,11);
    InsertFirst(&head,22);
    InsertFirst(&head,28);
    InsertFirst(&head,101);
    InsertFirst(&head,111);
    InsertFirst(&head,110);

    Display(head);
    iRet =  Count(head);
    printf("Total number of nodes are : %d\n",iRet);

    

    bRet  = Search(head,31);

    if( bRet == true)
    {
    printf("Given number is present \n");
    }
    else
    {
      printf("Given number is not present\n");  
    }

    return 0;
}