#include<iostream>
using namespace std;

int main()
{
    int i;
    string s;
    cin>>s;
    for(i=0;s[i] != '\0';i++)
    {
       if(s[i]>=65 && s[i]<=90)
       {
       s[i]=s[i]+32;
       }
       else if(s[i]>=97 && s[i]<=122)
       {
        s[i]=s[i]-32;
       }
       else
       {
       cout<<"INVALID INPUT";
       }
    }
    cout<<s;
    return 0;
}