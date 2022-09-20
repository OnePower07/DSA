#include<iostream>
using namespace std;

int main()
{
  string ch;
  int k=0,i;
  cout<<"Enter a string: ";
  getline(cin, ch);
  for(i=0;ch[i] != '\0';i++)
  {
    k++;
  }
  for(i=k-1;i>=0;i--)
  {
    cout<<ch[i];
  }
  return 0;
}