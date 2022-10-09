#include<iostream>
using namespace std;

int fact(int n)
{
  int i,fac=1;
  for(int i=1; i<=n; i++)
  {
    fac = fac*i;
  }
  return fac;
}
int ncr(int n, int r)
{
  int t1,t2,t3;
  t1 = fact(n);
  t2 = fact(r);
  t3 = fact(n-r);
  return t1/(t2*t3);
}
int main()
{
  cout<<ncr(4,1);
  return 0;
}