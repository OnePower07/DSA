#include<iostream>
using namespace std;

void head(int n)
{
  if(n>0)
  {
    cout<<n<<endl;
    head(n-1);
  }
}
int main()
{
  int x=10;
  head(x);
  return 0;
}