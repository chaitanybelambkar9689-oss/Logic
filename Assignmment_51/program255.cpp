/*
5
Input :
10
20
30
40
50
Output : 50     40      30      20      10
*/
#include<iostream>
using namespace std;

template <class T>
class SinglyLLL
{
   public:
        void Reverse(T *Arr,int iSize);
                  
};


template <class T>

void SinglyLLL<T>:: Reverse(T *Arr,int iSize)
{
    int iCnt = 0;
    int iCount = 0;

    cout<<"Output : ";
    for(iCnt = iSize - 1; iCnt >= 0 ;iCnt--)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";

}

int main()
{
 SinglyLLL<int> *obj = new  SinglyLLL<int>();

int iValue = 0;
int n = 0;
cin >>n;

int *Arr = new int[n];

cout<<"Input :  "<<"\n";
for(int i = 0 ; i < n;i++)
{ 
    cin>>Arr[i];
}
obj -> Reverse(Arr,n);

 return 0;

}
