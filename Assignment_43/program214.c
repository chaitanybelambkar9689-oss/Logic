
/*
Input Linked list : |110|-> |111|-> |101|-> |28|-> |22|-> |11|->|NULL|
Total number of nodes are : 6
Output : 110
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

int SecMaximum(PNODE first)
{
    PNODE temp = NULL;
    int iCnt = 0; // Important 

    int iSize = Count(first);

    int iMax = first ->data;
    int SecMax = first ->data; 

    temp = first ;

    if(first  == NULL || first ->next == NULL)
    {
        return -1;
    }
    while(temp != NULL)
    {

        if(temp -> data > iMax)
        {
            iMax = first ->data;
        }
         
        temp = temp -> next;
    }

    temp = first;

    while(temp != NULL)
    {
        if(temp ->data != iMax)
        {
            if((SecMax == iMax ||temp ->data ) > SecMax)
            {
                SecMax = temp -> data;
            }
        }
        temp = temp -> next;
    }
    return SecMax;
  
    
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

    iRet = SecMaximum(head);

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