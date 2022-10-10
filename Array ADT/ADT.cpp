#include<iostream>
using namespace std;

struct array
{
    int A[4];
    int size;
    int length;
};
int main()
{
  struct array arr={{1,2,4,5},12,5};
  int i,n;
  for(i=0;i<4;i++)
  {
    cout<<arr.A[i]<<" ";
  }
}