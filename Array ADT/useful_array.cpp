#include<iostream>
using namespace std;

struct methods{
  int A[10];
  int size;
  int length;
};
void display(struct methods arr)
{
  for(int i=0;i<arr.length;i++)
  {
      cout<<arr.A[i]<<" ";
  }
  cout<<endl;
}
int get(struct methods *arr, int index)
{
  if(index>=0 && index<arr->length)
    return arr->A[index];
    else
    return -1;
}
void set(struct methods *arr, int index,int x)
{
  if(index>=0 && index<arr->length)
  {
      arr->A[index]=x;
  }
}
int max(struct methods *arr)
{
  int max=arr->A[0];
  for(int i=1;i<arr->length;i++)
  {
    if(arr->A[i]>max)
    max=arr->A[i];
  }
  return max;
}
int min(struct methods *arr)
{
  int min=arr->A[0];
  for(int i=1;i<arr->length;i++)
  {
    if(arr->A[i]<min)
    min=arr->A[i];
  }
  return min;
}
int sum(struct methods *arr)
{
  int sum=0;
  for(int i=0;i<arr->length;i++)
  {
    sum=sum+arr->A[i];
  }
  return sum;
}
int avg(struct methods *arr)
{
  int sum=0;
  for(int i=0;i<arr->length;i++)
  {
    sum=sum+arr->A[i];
  }
  return sum/arr->length;
}
int main()
{
  struct methods arr1={{2,3,45,5,6},10,5};
  display(arr1);
  cout<<get(&arr1,2)<<endl;
  set(&arr1,2,33);
  display(arr1);
  cout<<max(&arr1)<<endl;
  cout<<min(&arr1)<<endl;
  cout<<sum(&arr1)<<endl;
  cout<<avg(&arr1);
  return 0;
}