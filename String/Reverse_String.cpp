#include<iostream>
using namespace std;

int main()
{
    int temp,count=0;
    string s;
    cin>>s;
    int i;
    while(s[count] != '\0')
    {
       count++;
    }
    int j = count-1;
    for(i=0;i < count/2; i++,j--)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    cout<<s;
    return 0;
}