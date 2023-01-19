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
  int search(int key) //improved search
  {
    node *p = head;
    node *q = NULL;
    while(p != NULL)
    {
      if(key == p->data)
      {
        q->next=p->next;
        p->next = head;
        head = p;
        return 1;
      }
      q = p;
      p = p->next;
    }
    return 0;
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
  for(int i = 10; i < 100; i+=10)
  {
    l.insert(i);
  }
  l.display();
  cout<<l.search(30)<<endl;
}