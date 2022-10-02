#include<bits/stdc++.h>
using namespace std;
string strrev(string s)
{
  int len=s.length();
  for(int i=0;i<len/2;i++)
  {
    swap(s[i],s[len-i-1]);
  }
  return s;
}
int main()
{
  string str="Rishu";
  cout<<strrev(str);
  return 0;
}