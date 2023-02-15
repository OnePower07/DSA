#include<iostream>
using namespace std;

int linear(int arr[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
          return i;
    }
}
int main()
{
  int A[]={2,5,8,7};
  cout<<linear(A,4,7);
  return 0;
}