#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
  vector <int> v1;
  cout<<"Size of the vector at beginning is: "<<v1.size();
  cout<<endl;
  //elements pushed from back
  v1.push_back(1);
  v1.push_back(1);
  v1.push_back(4);
  v1.push_back(1);
  v1.push_back(3);
  v1.push_back(3);
  v1.push_back(7);
  v1.push_back(3);
  v1.push_back(2);
  cout<<"Size of the vector after pushback is: "<<v1.size();
  cout<<endl;
  cout<<"Maximum size of the vector is: "<<v1.max_size();
  cout<<endl;
  cout<<"Capacity of the vector: "<<v1.capacity();
  cout<<endl;
  for(auto i=v1.begin();i!=v1.end();i++)
  {
    cout<<*i<<" ";
  }
  v1.resize(5);
  cout<<endl;
  for(auto i=v1.rbegin();i!=v1.rend();i++)
  {
    cout<<*i<<" ";
  }
  cout<<endl;
  if(v1.empty()==false)
  {
    cout<<"Vector is not empty"<<endl;
  }
  else
  {
    cout<<"Vector is empty"<<endl;
  }
  v1.shrink_to_fit();
  for(auto i=v1.begin();i!=v1.end();i++)
  {
    cout<<*i<<" ";
  }
  cout<<endl;
  v1.assign(6,12);
  cout<<"Elements are : ";
  for(int i=0;i<v1.size();i++)
  {
    cout<<v1[i]<<" ";
  }
  cout<<endl;
  v1.push_back(5);
  for(int i=0;i<v1.size();i++)
  {
    cout<<v1[i]<<" ";
  }
  cout<<endl;
  v1.pop_back();
  for(int i=0;i<v1.size();i++)
  {
    cout<<v1[i]<<" ";
  }
  cout<<endl;
  v1.insert(v1.begin(),23);
  for(int i=0;i<v1.size();i++)
  {
    cout<<v1[i]<<" ";
  }
  for(int i=0;i<v1.size();i++)
  {
    cout<<v1[i]<<" ";
  }
  cout<<endl;
  v1.erase(v1.begin(),v1.end());
  cout<<"Size is: "<< v1.size();
  return 0;
}