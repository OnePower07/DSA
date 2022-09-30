#include<iostream>
using namespace std;

int main()
{
  int A[5];
  int *P;
  P= new int [5];
  P[0]=2;
  P[1]=3;
  P[2]=5;
  P[3]=6;
  P[4]=8;
  for(int i=0;i<5;i++)
  {
    cout<<P[i]<<" ";
  }
  return 0;
}