/*
Input Linked list : |101|-> |51|-> |21|-> |11|->|NULL|
Total number of nodes are : 4
Input Element : 11
Output : 4
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

int SearchFirstOcc(PNODE first,int no)
{
    int iSize = 0,i = 0;

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
        printf("Input Element : %d\n",first -> data);
        return i+1;
      } 

      if(first != NULL)
      {
        first = first -> next;
      }

    }
    
    return -1 ; //Not Found

}
int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head,11);
    InsertFirst(&head,21);
    InsertFirst(&head,51);
    InsertFirst(&head,101);

    Display(head);
    iRet =  Count(head);
    printf("Total number of nodes are : %d\n",iRet);

    iRet = SearchFirstOcc(head,11);

     
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