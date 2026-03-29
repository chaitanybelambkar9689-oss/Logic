/*
Result is : 110
Result is : 200.4
*/
#include<iostream>
using namespace std;

template <class T>
class Generic
{
    public:
        T Multiply(T,T);

};

template <class T>

T Generic<T> :: Multiply(T No1,T No2)
{
    T Ans;
    Ans = No1 *No2;
    return Ans;
    
}
int main()
{
   Generic <int> *obj1 = new Generic <int>(); //Dynamically memeory allocate keli

   int iRet = 0;

   iRet = obj1 -> Multiply(10,11);

   cout<<"Result is : "<<iRet<<"\n";

    Generic <float> *obj2 = new Generic <float>();

   float fRet = obj2 -> Multiply(10.02f,20.0f);
   cout <<"Result is : "<<fRet<<"\n";

   delete obj1;
   delete obj2;

    return 0;
}