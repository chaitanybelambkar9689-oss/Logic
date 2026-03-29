/*
Output : 23 is greater
*/
#include<iostream>
using namespace std;

template <class T>
class Generic
{
    public:
        T Max(T,T,T);

};

template <class T>

T Generic<T> :: Max(T No1,T No2,T No3)
{
   if((No1 > No2) && (No1 > No3))
   {
    cout<<"Output : "<<No1 <<" is greater "<<"\n";
   }
   else if((No2 > No1) && (No2 > No3))
   {
    cout<<"Output : "<<No2 <<" is greater"<<"\n";
   }
   else if((No3 > No1 ) && (No3 > No2))
   {
    cout<<"Output : "<<No3<<" is  greater "<<"\n";
   }
   else
   {
    cout<< "No such number"<<"\n";
   }
    
}
int main()
{
   Generic <int> obj1;

   int iRet = obj1.Max(11,23,9);

    return 0;
}