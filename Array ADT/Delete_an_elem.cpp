#include<bits/stdc++.h>
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

void insert (struct Array *arr, int index, int x)
{
  if(index>=0 && index<=arr->length)
  {
  for(int i=arr->length;i>index;i--)
  {
     arr->A[i]=arr->A[i-1];
  }
     arr->A[index]=x;
     arr->length++;
  }
}

int Delete (struct Array *arr, int index)
{
  int x=0;
  if(index>=0 && index<arr->length)
  {
    x=arr->A[index];
    for(int i=index;i<arr->length-1;i++)
    {
      arr->A[i]=arr->A[i+1];
    }
    arr->length--;
    return x;
  }
  return 0;
}

int main()
{
  struct Array arr1 = {{2,43,5,56,6},8,5};
  display(arr1);
  insert(&arr1,1,87);
  Delete(&arr1,2);
  display(arr1);
}