#include<iostream>
using namespace std;
int x=0;
int sum(int n)
{
  if(n>0)
  {
    x++;
    return sum(n-1)+x;
  }
}
int main()
{
  int x=5;
  cout<<sum(x)<<endl;
  cout<<sum(x);

  return 0;
}