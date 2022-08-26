#include<iostream>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    if(ch>=97 && ch<=122)
    {
        cout<<"SMALL CASE ALPHABET";
    }
    else if(ch>=65 && ch<=90)
    {
        cout<<"UPPER CASE ALBHABET";
    }
    else
    {
        cout<<"THIS IS A SYMBOL";
    }
}