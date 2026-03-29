1.Write generic program to multiply two numbers.
template<class T>
T Multiply(T no1, T no2)
{
____ ans;
ans = _______;
return ans;
}
int main()
{
int iRet = Multiply(10,20);
printf(“%d”,iRet);
float fRet = Multiply(10.0f,20.0f);
printf(“%f”,fRet);
return 0;
}
2. Write generic program to find largest number from three numbers.
template<class T>
T Max(_______ , ___________ , _________)
{
// Logic
}

3. Write generic program to accept N values from user and return addition of that
values.

template<class T>
T AddN(T *arr, int iSize)
{

T sum;
int i = 0;
// Fileter
for(i = 0;i<iSize;i++)
{
iSum = ___________;
}
return iSum;
}
int main()
{
int arr[]={10,20,30,40,50};
float brr[] = {10.0,3.7,9.8,8.7};
int iSum = AddN(arr,5);
printf(“%d”,iSum);
float fSum = AddN(brr,4);
printf(“%f”,fSum);
return 0;
}

4. Write generic program to accept N values from user and return largest values.
template<class T>
T Max(T *arr, int iSize)
{
// Logic
}
int main()
{
int arr[]={10,20,30,40,50};
float brr[] = {10.0,3.7,9.8,8.7};


int iRet = Max(arr,5);
printf(“%d”,iRet); // 50
float fRet = Max(brr,4);
printf(“%f”,fRet); // 9.8
return 0;
}

5. Write generic program to accept N values from user and return smallest value.
template<class T>
T Min(T *arr, int iSize)
{
// Logic
}
int main()
{
int arr[]={10,20,30,40,50};
float brr[] = {10.0,3.7,9.8,8.7};
int iRet = Min(arr,5);
printf(“%d”,iRet); // 10
float fRet = Min(brr,4);
printf(“%f”,fRet); // 10.0
return 0;
}
