#include<iostream>
using namespace std;

struct reverse
{
  int A[10];
  int length;
  int size;
};
void display(struct reverse arr)
{
  int i;
  for(i=0; i<arr.length;i++)
  {
    cout<<arr.A[i]<<" ";
  }
  cout<<endl;
}
void swap(int *x,int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
int Reverse(struct reverse *arr)
{
    int B[10],i,j;
    for(i=arr->length-1,j=0;i>=0;i--,j++)
    {
        B[j]=arr->A[i];
    }
    for(i=0;i<arr->length;i++)
    {
      arr->A[i]=B[i];
    }
    return arr->A[i];
}
int reverse2(struct reverse *arr)
{
  int i,j;
  for( i=0,j=arr->length-1;i<j;i++,j--)
  {
     swap(&arr->A[i],&arr->A[j]);
  }
  return arr->A[i];
}
int main()
{
  struct reverse arr1={{1,3,4,5,6},5,10};
  display(arr1);
  reverse2(&arr1);
  display(arr1);
}