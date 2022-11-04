#include<iostream>
using namespace std;

struct Array {
  int A[10];
  int size;
  int length;
};

void display(struct Array arr)
{
  for(int i=0;i<arr.length;i++)
  {
    cout<<arr.A[i]<<" ";
  }
  cout<<endl;
}
void insert(struct Array *arr,int x)
{
    int i=arr->length-1;
    while(arr->A[i]<x)
    {
      arr->A[i+1]=arr->A[i];
      i--;
    }
    arr->A[i+1]=x;
}
int main()
{
  struct Array arr1 = {{2,3,54,68,81},9,7};
  display(arr1);
  insert(&arr1,55);
  display(arr1);
  return 0;
}