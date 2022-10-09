#include<iostream>
using namespace std;

int sum(int n)
{
  static int x;
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