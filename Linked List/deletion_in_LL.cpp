#include<iostream>
using namespace std;

class node
{
  public:
  int data;
  node *next;

  node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};
class Linkedlist
{
  public:
  node *head;
  Linkedlist()
  {
    head = NULL;
  }
  void insert(int data)
  {
    node *p = new node(data);
    if(head == NULL)
    {
      head = p;
      return;
    }
    node *q = head;
    while(q->next != NULL)
    {
      q = q->next;
    }
    q->next = p;
  }
  void remove()
  {
    node *temp = head;
    head = head->next;
    int x = temp->data;
    delete temp;
  }
  void remove_at_any_pos(int pos)
  {
    node *p = head;
    node *q = NULL;
    for(int i=0; i<pos-1;i++){
      q = p;
      p = p->next;
    }
    q->next = p->next;
    int x = p->data;
    delete p;
  }
  void display()
  {
    node *temp = head;
    while(temp != NULL)
    {
      cout<<temp->data<<" ";
      temp = temp->next;
    }
    cout<<endl;
  }
};
int main()
{
  Linkedlist l;
  for(int i=10;i<20;i+=2)
  {
    l.insert(i);
  }
  l.display();
  l.remove();
  l.display();
  l.remove_at_any_pos(3);
  l.display();
}