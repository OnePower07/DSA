#include<iostream>
using namespace std;

int main()
{
  string s = "Ritesh";
  int i = 0;
  for(i=0;s[i]!='\0';i++);
  cout<<i;
  return 0;
}