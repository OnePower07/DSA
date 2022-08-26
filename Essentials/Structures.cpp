#include<iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle r={10,4};
    r.length=13;
    r.breadth=2;
    cout<<"Area of rectnagle: "<<r.length*r.breadth<<" units";
}