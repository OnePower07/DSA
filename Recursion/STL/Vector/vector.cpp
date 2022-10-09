#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int i=0;
  vector<int> v;
  for(i=0;i<5;i++)
  {
     v.push_back(i);
  }
  for(i=0;i<=5;i++)
  {
    cout<<v[i]<<endl;
  }

}