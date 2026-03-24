
/*

Input Linked list : |11|-> |22|-> |-28|-> |-101|-> |111|-> |11|->|NULL|
Total number of nodes are : 6
Nodes after placing the at the alternate position : Number of Nodes at every  3-th position : 2
Nodes at every 3 -th position :
|-28| -> |11| -> |NULL|
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

int CountAtNthPosition(PNODE first ,int n)
{
    int iCount = 0;
    int Pos = 1;

    while(first != NULL)
    {
        if(Pos %n == 0)
        {
            iCount++;
        }
        first = first ->next;
        Pos++;
    }
    return iCount;

}

void DisplayNthPosition(PNODE first,int n)
{
    if(n < 0)
    {
        return ;
    }
    int Pos = 1;

    printf("Nodes at every %d -th position : \n",n);

    while(first != NULL)
    {
        if(Pos %  n == 0)
        {
            printf("|%d| -> ",first ->data);
            
        }
        first = first -> next;
        Pos++;
    }
    printf("|NULL|\n");
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


int main()
{
    int iRet = 0;
    PNODE head = NULL;
    bool bRet =  false;
    int pos = 0;

    InsertLast(&head,11);
    InsertLast(&head,22);
    InsertLast(&head,-28);
    InsertLast(&head,-101);
    InsertLast(&head,111);
    InsertLast(&head,11);

    Display(head);
    iRet =  Count(head);
    printf("Total number of nodes are : %d\n",iRet);
    
    printf("Nodes after placing the at the alternate position : ");
    
    pos = 3;
    iRet =  CountAtNthPosition(head,pos);
    printf("Number of Nodes at every  %d-th position : %d\n",pos,iRet);

    DisplayNthPosition(head,pos);

    return 0;
}