#include<iostream>
#include <stdio.h>
using namespace std;

struct Rectangle
{
    
        int length;
        int breadth;
    
    int area(struct Rectangle r1)
    {
        r1.length++;
        return r1.length*r1.breadth;
    }
};
    int main()
    {
        struct Rectangle r={10,5};
    
        cout<<r.area(r);
    }