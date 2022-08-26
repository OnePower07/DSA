#include<iostream>
using namespace std;

int main()
{ 
    int i,count=0;
    string str = "Ritesh";
    while(str[count] != '\0')
    {
       count++;
    }
    cout<<count;
    return 0;
}