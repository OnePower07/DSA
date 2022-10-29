#include<iostream>
using namespace std;

struct binary{
  int A[10];
  int size;
  int length;
};
void display(struct binary arr)
{
  for(int i=0;i<arr.length;i++)
  {
      cout<<arr.A[i]<<" ";
  }
}
int Binary(struct binary *arr, int key)
{
  int l=0,h=arr->length-1,mid;
  while(l<=h)
  {
    mid=(l+h)/2;
    if(key==arr->A[mid])
    {
      return mid;
    }
    else if(key<arr->A[mid])
    {
      h=mid-1;
    }
    else
    l=mid+1;
  }
  return -1;
}

int main()
{
  struct binary arr1={{2,3,5,6,7},10,5};
  cout<<Binary(&arr1,5)<<endl;
  display(arr1);
  return 0;
}