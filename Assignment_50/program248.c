

/*
 Sorted List : |-101 | -> |-28 | -> |11 | -> |11 | -> |22 | -> |111 | -> NULL
Total number of nodes are : 6
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

void DisplaySorted(PNODE first)
{
  
    if(first == NULL)
    {
        return;
    }

    PNODE temp1 = NULL,temp2 = NULL;

    int t = 0;

    for(temp1 = first;temp1 != NULL; temp1 = temp1 ->next)
    {
        for(temp2 = temp1 -> next ; temp2 != NULL;temp2  = temp2 ->next)
        {
            if(temp1 ->data > temp2 ->data)
            {
                t = temp1 ->data;
                temp1 ->data = temp2 ->data;
                temp2 ->data = t;

            }
        }
    }

    printf(" Sorted List : ");

    while(first != NULL)
    {
        printf("|%d | -> ",first ->data);
        first = first ->next;
    }

    printf("NULL\n");


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

    InsertLast(&head,11);
    InsertLast(&head,22);
    InsertLast(&head,-28);
    InsertLast(&head,-101);
    InsertLast(&head,111);
    InsertLast(&head,11);

    DisplaySorted(head);
    iRet =  Count(head);
    printf("Total number of nodes are : %d\n",iRet);


    return 0;
}