/*
Value to search :40
Output : 6

*/
#include<iostream>
using namespace std;

template <class T>
class SinglyLLL
{
   public:
        int SearchFirst(T *Arr,int iSize,T No);
                  
};


template <class T>

int SinglyLLL<T>:: SearchFirst(T *Arr,int iSize,T No)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize  ;iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            return iCnt+1;
        }

    }
    return -1;

}

int main()
{
 SinglyLLL<int> *obj = new  SinglyLLL<int>();

int Arr[] = {10,20,30,10,30,40,10,40,10};

int iValue = 0;
cout<<"Value to search :";
cin>>iValue;

int iRet = obj -> SearchFirst(Arr,9,iValue);

cout<<"Output : "<<iRet<<"\n";

 return 0;

}