#include<iostream>
using namespace std;

double e(int x,int n)
{
   double num=1;
   double deno=1;
   double s=1;
   int i;
   for(i=1;i<=n;i++)
   {
    num *=x;
    deno *=i;
    s+=num/deno;
   }
   return s;
}
int main()
{
  cout<<e(1,10);
  return 0;
}