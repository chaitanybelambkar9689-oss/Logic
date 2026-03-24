
/*
Input Linked list : |11|-> |22|-> |-28|-> |-101|-> |111|-> |11|->|NULL|
Total number of nodes are : 6
Count of Digits  :
 2        2       2       3       3       2
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

void CountDigits(PNODE first)
{
   int iCount = 0;
   int No = 0 ;
   int temp = 0;

   
   printf("Count of Digits  : \n");
   while( first != NULL)
   {
     iCount  = 0;
     temp = first -> data;

     if(temp  < 0)
     {
        temp  = -(temp);
     }

    while(temp  != 0)
    {
      No  = temp % 10;
      iCount++;
      temp  = temp /10;
    }
    printf(" %d\t ",iCount);
   
    first = first -> next;

   }
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
    InsertLast(&head,11);

    Display(head);
    iRet =  Count(head);
    printf("Total number of nodes are : %d\n",iRet);

   
    CountDigits(head);


    return 0;
}