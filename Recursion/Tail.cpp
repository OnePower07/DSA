#include<iostream>
using namespace std;

void tail(int n)
{
  if(n>0)
  {
    tail(n-1);
    cout<<n<<endl;
  }
}
int main()
{
  int x=10;
  tail(x);
}