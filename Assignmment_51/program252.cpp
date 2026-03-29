/*
9
Enter  array elements :
10
20
30
10
30
40
10
40
10
Value to search :40
Output : 2
*/
#include<iostream>
using namespace std;

template <class T>
class SinglyLLL
{
   public:
        int Frequency(T *Arr,int iSize,T No);
                  
};


template <class T>

int SinglyLLL<T>:: Frequency(T *Arr,int iSize,T No)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize ;iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            iCount++;
        }

    }
    return iCount ;

}

int main()
{
 SinglyLLL<int> *obj = new  SinglyLLL<int>();

int iValue = 0;
int n = 0;
cin >>n;

int *Arr = new int[n];

cout<<"Enter  array elements : "<<"\n";
for(int i = 0 ; i < n;i++)
{
    cin>>Arr[i];
}

cout<<"Value to search :";
cin>>iValue;

int iRet = obj -> Frequency(Arr,n,iValue);

cout<<"Output : "<<iRet<<"\n";

 return 0;

}
