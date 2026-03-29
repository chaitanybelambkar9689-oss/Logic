/*
Enter the size of the array : 5
Input integer elements :
10
20
30
40
50
Sum is : 150
Input  float elements:
10.36
25
58.69
36.2
12.87
Sum is : 143.12
*/
#include<iostream>
using namespace std;

template <class T>
class Generic
{
    public:
      T  AddN(T *Arr,int iSize);
};

template <class T>

T Generic<T> :: AddN(T *Arr,int iSize)
{
    T iSum = 0;

    int i = 0;

    for(i = 0; i < iSize;i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
   Generic <int> *obj1 = new Generic <int>(); //Dynamically memeory allocate keli

   int iRet = 0;
   float fRet = 0;
   int No = 0;
   cout<<"Enter the size of the array : ";
   cin>>No;

   int *Arr = new int[No];

   cout<<"Input integer elements :"<<"\n";

   for(int i = 0; i < No;i++)
   {
     cin>>Arr[i];
   }

   iRet = obj1 -> AddN(Arr,No);
   cout<<"Sum is : "<<iRet<<"\n";

   Generic <float> *obj2 = new Generic <float>(); 

   float *Brr = new float[No];
   cout<<"Input  float elements:"<<"\n";

   for(int i = 0; i < No;i++)
   {
     cin>>Brr[i];
   }

   fRet = obj2 -> AddN(Brr,No);
   cout<<"Sum is : "<<fRet<<"\n";

   delete []Arr;
   delete []Brr;

    return 0;
}