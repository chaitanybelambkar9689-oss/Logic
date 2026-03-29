/*
Object of singly LL gets created.
|51|->|21|->|11|->NULL
Number of nodes are : 3
M       M       M       M       M       M       M
*/
#include<iostream>
using namespace std;

#pragma pack(1)
template <class T>
class SinglyLLLnode
{
    public:
        T data;
         SinglyLLLnode <T>* next;

     SinglyLLLnode(T no)
    {
        this -> data = no;
        this -> next = NULL;
    }    
};

template <class T>
class SinglyLLL
{

    private: //Important
        SinglyLLLnode <T> *first;  //head
        int iCount;

    public:
       SinglyLLL();
        void InsertFirst(T);
       
        void Display();
       
        int Count();

        void DisplayX(T Value,int iSize);
                  
};

template <class T>
SinglyLLL<T>::SinglyLLL()
{
cout<<"Object of singly LL gets created.\n";
this->first = NULL;
this->iCount = 0;
}

template <class T>
void SinglyLLL<T>:: InsertFirst(T no)
{
 SinglyLLLnode<T> * newn = NULL;

newn = new  SinglyLLLnode<T>(no);

if(first == NULL)
{
this->first = newn;
}
else
{
newn ->next = first;
this->first = newn;
}
iCount++;
}


template <class T>
void SinglyLLL<T>:: Display()
{
    int iCnt = 0;
     SinglyLLLnode <T> * temp = NULL;


    temp = this->first;

        for(iCnt = 0;iCnt < iCount;iCnt++)  //Updated
        {
            cout<<"|"<<temp->data<<"|->";
            temp = temp ->next;
        }
    cout<<"NULL\n";
}

template<class T>

int SinglyLLL<T> :: Count()
{
    return this -> iCount;
}

template <class T>

void SinglyLLL<T>:: DisplayX( T value , int iSize)
{
    int i = 0;

    for(i = 0;i < iSize; i++)
    {
        cout<<(char)value<<"\t";
    }
    cout<<" "<<"\n";

}

int main()
{
 SinglyLLL<int> *obj = new  SinglyLLL<int>();
 int iRet = 0;

 obj -> InsertFirst(11);
 obj -> InsertFirst(21);
 obj -> InsertFirst(51);

 obj -> Display();
 iRet = obj -> Count();
 cout<<"Number of nodes are : "<<iRet<<"\n";

 obj -> DisplayX((char)77,7);


 return 0;

}