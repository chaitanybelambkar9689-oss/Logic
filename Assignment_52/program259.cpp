/*
Enter the size of the array : 5
Input integer elements :
10
5069
78
23
5678
Maximum Number is : 5678
Input  float elements:
12.36
26.4
82.3
23.8
25.9
Maximum number is : 82.3
*/
#include<iostream>
using namespace std;

template <class T>
class Generic
{
    public:
      T  Max(T *Arr,int iSize);
};

template <class T>

T Generic<T> :: Max(T *Arr,int iSize)
{
    T iSum = 0;

    int i = 0;

    T Max = 0;

    for(i = 0; i < iSize;i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        } 
    }
    return Max;
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

   iRet = obj1 -> Max(Arr,No);
   cout<<"Maximum Number is : "<<iRet<<"\n";

   Generic <float> *obj2 = new Generic <float>(); 

   float *Brr = new float[No];
   cout<<"Input  float elements:"<<"\n";

   for(int i = 0; i < No;i++)
   {
     cin>>Brr[i];
   }

   fRet = obj2 -> Max(Brr,No);
   cout<<"Maximum number is : "<<fRet<<"\n";

   delete []Arr;
   delete []Brr;

    return 0;
}