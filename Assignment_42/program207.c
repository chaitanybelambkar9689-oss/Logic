/*
Input Linked list : |11|-> |111|-> |101|-> |51|-> |21|-> |11|->|NULL|
Total number of nodes are : 6
Input Elements : 11
Output : 6
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

int SearchLastOcc(PNODE first,int no)
{
    int iSize = 0,i = 0;
    int iPos = 0;

    iSize = Count(first);
    
    PNODE temp = NULL;

    for( i = 0; i < iSize ;i++)
    {
       
        if(first == NULL)
        {
            break;
        }
      if(first -> data == no)
      {
        iPos = i+1;
      }
      
     
      if(first != NULL)
      {
        first = first -> next;
      }

    }
    if(iPos != -1)
    {
    printf("Input Elements : %d\n",no);
    }
    return iPos; //Not Found

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

    iRet = SearchLastOcc(head,11);

     
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