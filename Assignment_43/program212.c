/*
Input Linked list : |11|-> |111|-> |101|-> |51|-> |21|-> |11|->|NULL|
Total number of nodes are : 6
Output : 11
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

bool CheckPrime(int no)
{
    int iCnt = 0;
    bool bFlag = false;


    if(no < 0)
    {
        no =-no;
    }
    bFlag = true;

    for(iCnt = 2,bFlag = true; iCnt < no/2;iCnt++)
    {
        if(no % iCnt == 0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}

void DisplayPrime(PNODE first)
{
    int Seen[100];
    int Count = 0;
   
    while(first != NULL)
    {
    
      if(CheckPrime((first) -> data) == true)
      {
        bool isduplicate = false;

        for(int i = 0;i < Count ; i++)
        {
            if(Seen[i] == first -> data)
            {
                isduplicate = true;
                break;
            }

        }
        
        if( isduplicate == false)
        {
            printf("Output : %d\t",first ->data);
            Seen[Count] =  first ->data;
            Count++;
        }
        
      }
      first = first -> next;
    }
    printf("\n");
  
    
}
int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head,11);
    InsertFirst(&head,21);
    InsertFirst(&head,51);
    InsertFirst(&head,101);
    InsertFirst(&head,112);
 

    Display(head);
    iRet =  Count(head);
    printf("Total number of nodes are : %d\n",iRet);

    DisplayPrime(head);

    return 0;
}