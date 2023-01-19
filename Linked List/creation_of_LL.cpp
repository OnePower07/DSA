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
  int count()
  {
    node *p = head;
    int c=0;
    while(p != 0)
    {
      c++;
      p = p->next;
    }
    return c;
  }
  int add()
  {
    node *p = head;
    int sum = 0;
    while(p != NULL)
    {
      sum = sum + p->data;
      p = p->next;
    }
    return sum;
  }
  int max()
  {
    node *p = head;
    int maximum = INT32_MIN;
    while(p != NULL){
    if(p->data > maximum)
    {
      maximum = p->data;
    }
     p = p->next;
    }
    return maximum;
  }
  int min()
  {
    node *p = head;
    int minimum = INT32_MAX;
    while(p != NULL)
    {
      if(minimum > p->data)
      {
        minimum = p->data;
      }
      p = p->next;
    }
    return minimum;
  }
  int search(int key)
  {
    node *p = head;
    // node *q = NULL;
    while(p != NULL)
    {
      if(key == p->data)
      return 1;

    p = p->next;
    }
    return 0;
  }
};
int main()
{
  Linkedlist l;
  for(int i = 10; i < 20; i++)
  {
    l.insert(i);
  }
  l.display();
  cout<<l.count()<<endl;
  cout<<l.add()<<endl;
  cout<<l.max()<<endl;
  cout<<l.min()<<endl;
  cout<<l.search(29);
}