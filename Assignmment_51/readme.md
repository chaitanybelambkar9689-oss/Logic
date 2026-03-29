1. Write generic program which accept one value and one number from user. Print
that value that number of times on screen.
Input : M 7
Output : M M M M M M M
Input : 11 3
Output : 11 11 11
Input : 3.7 6
Output : 3.7 3.7 3.7 3.7 3.7 3.7
template<class T>
void Display(T value, int iSize)
{
// Logic
}
int main()
{
Display(‘M’,7);
Display(11,3);
Display(3.7,6);
return 0;
}

2. Write generic program to accept N values and count frequency of any specific
value.
Input : 10 20 30 10 30 40 10 40 10
Value to check frequency : 10
Output : 4
template<class T>
int Frequency(T *arr, int iSize, T iNo)
{
// Logic

Marvellous Logic Building Assignment : 51
}
int main()
{
int arr[]={10,20,30,10,30,40,10,40,10};
int iRet = Frequency(arr,9,10);
printf(“%d”,iRet); // 4
return 0;
}

3. Write generic program to accept N values and search first occurrence of any
specific value.
Input : 10 20 30 10 30 40 10 40 10
Value to search : 40
Output : 6
template<class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
// Logic
}
int main()
{
int arr[]={10,20,30,10,30,40,10,40,10};
int iRet = SearchFirst(arr,9,40);
printf(“%d”,iRet); // 6
return 0;
}

4. Write generic program to accept N values and search last occurrence of any
specific value.
Input : 10 20 30 10 30 40 10 40 10
Value to search : 40


Output : 8
template<class T>
int SearchLast(T *arr, int iSize, T iNo)
{
// Logic
}
int main()
{
int arr[]={10,20,30,10,30,40,10,40,10};
int iRet = SearchLast(arr,9,40);
printf(“%d”,iRet); // 8
return 0;
}

5. Write generic program to accept N values and reverse the contents.
Input : 10 20 30 10 30 40 10 40 10
Output : 10 40 10 40 30 10 30 20 10
template<class T>
void Reverse(T *arr, int iSize)
{
// Logic
}
int main()
{
int arr[]={10,20,30,10,30,40,10,40,10};
for(int i=0;i<9;i++)
{
cout<<arr[i]; // 10 20 30 10 30 40 10 40 10
}
Reverse(arr,9);

for(int i=0;i<9;i++)
{
cout<<arr[i]; // 10 40 10 40 30 10 30 20 10
}
return 0;
}
