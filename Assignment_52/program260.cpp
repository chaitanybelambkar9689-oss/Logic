/*
Enter the size of the array : 5
Input integer elements :
10
20
30
42
3
Minimum Number is : 3
Input  float elements:
12.3
56.6
53.6
12.29
12
Minimum number is : 12
*/
#include<iostream>
using namespace std;

template <class T>
class Generic
{
    public:
      T  Min(T *Arr,int iSize);
};

template <class T>

T Generic<T> :: Min(T *Arr,int iSize)
{
    T iSum = 0;

    int i = 0;

    T Min = Arr[0];

    for(i = 0; i < iSize;i++)
    {
        if(Arr[i] < Min)
        {
            Min = Arr[i];
        } 
    }
    return Min;
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

   iRet = obj1 -> Min(Arr,No);
   cout<<"Minimum Number is : "<<iRet<<"\n";

   Generic <float> *obj2 = new Generic <float>(); 

   float *Brr = new float[No];
   cout<<"Input  float elements:"<<"\n";

   for(int i = 0; i < No;i++)
   {
     cin>>Brr[i];
   }

   fRet = obj2 -> Min(Brr,No);
   cout<<"Minimum number is : "<<fRet<<"\n";

   delete []Arr;
   delete []Brr;

    return 0;
}