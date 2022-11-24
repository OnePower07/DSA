#include<iostream>
using namespace std;
class node
{
  public:
  int data;
  node* next;
};
int main()
{
  node* head;
  node* one = nullptr;
  node* two = nullptr;
  node* three = nullptr;

  one = new node();
  two = new node();
  three = new node();

  one->data = 1;
  two->data = 2;
  three->data = 3;

  one->next = two;
  two->next = three;
  three->next =nullptr;

  head = one;
  while(head!=nullptr)
  {
    cout<<head->data<<" ";
    head=head->next;
  }
}