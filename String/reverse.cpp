#include<bits/stdc++.h>
using namespace std;

int str_length(string str)
{
  int i;
  for(i=0;str[i]!='\0';i++);
  return i;
}

int main()
{
  char A[]="Ritesh";
  int i;
  int n=str_length(A);
  for(i=0;i<n/2;i++)
  {
    swap(A[i],A[n-i-1]);
  }
  cout<<A;
  return 0;
}