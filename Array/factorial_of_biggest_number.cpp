#include<bits/stdc++.h>
using namespace std;

int max_array(int arr[],int size)
{
   int max=arr[0];
   for(int i=1;i<size;i++)
   {
      if(arr[i]>max)
      {
         max=arr[i];
      }
   }
   return max;
}
int factorial(int x)
{
  int fact=1;
  for(int i=1;i<=x;i++)
  {
    fact=fact*i;
  }
  return fact;
}
int main()
{
  int arr[5]={2,5,1,3,4};
  // int a = max_array(arr,5);
  cout<<"Factorial of maximum number from an Array is: "<<factorial(max_array(arr,5));
  return 0;
}