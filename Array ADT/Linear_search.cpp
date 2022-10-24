#include<iostream>
using namespace std;

struct Linear
{
  int A[10];
  int size;
  int length;
};
void display(struct Linear arr)
{
  for(int i=0;i<arr.length;i++)
  {
      cout<<arr.A[i]<<" ";
  }
}
int search(struct Linear *arr,int key)
{
  int i;
  for(i=0;i<arr->length;i++)
  {
    if(key==arr->A[i])
    return i;
  }
  return -1;
}
int main()
{
  struct Linear arr1={{2,4,5,6,7,5},10,5};
  cout<<search(&arr1,12)<<endl;
  display(arr1);
  return 0;
}