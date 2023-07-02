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
  void insert_at_beginning(int data)
  {
    node *temp = new node(data);
    if(head == NULL)
    {
      head = temp;
      return;
    }
    if(head != NULL)
    {
      temp -> next = head;
      head = temp;
    }
  }
  void insert_at_any_position(int data, int position)
  {
    node *temp = new node(data);
    if(head == NULL)
    {
      head = temp;
      return;
    }
    node *p = head;
    for(int i=1;i<position-1 && p != NULL;i++)
    {
      p=p->next;
    }
    temp->next = p->next;
    p->next = temp;
  }
  void createLL(int data)
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
      q=q->next;
    }
    q->next = p;
  }
  void insert_in_sorted_array(int data)
  {
    node *p = new node(data);
    node *temp = head;
    node *q = NULL;
    if(head == NULL)
    {
      head = p;
    }
    else{
    while(temp!=NULL && temp->data<data)
    {
      q = temp;
      temp = temp->next;
    }
    if(temp == head)
    {
      p->next = head;
      head = p;
    }
    else{
    p -> next = q -> next;
    q -> next = p;
    }
    }
  }
  void removeDuplicates() 
    {
     node *p = head;
     node *q = head->next;
     while(q != NULL)
     {
        if(p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q=p->next;
        }
     }
    }
  int LL_sorted_or_not()
  {
    int x = INT32_MIN;
    node *p = head;
    while(p !=  NULL){
      if(p->data < x)
      {
        return false;
      }
      x = p->data;
      p = p->next;
    }
    return true;
  }
  void display()
  {
    node *temp = head;
    while(temp != NULL)
    {
      cout<<temp->data<<" ";
      temp = temp -> next;
    }
    cout<<endl;
  }
};
int main()
{
  Linkedlist l;
  for(int i = 10; i > 0; i--)
  {
    l.createLL(i);
  }
  l.display();
  l.insert_in_sorted_array(8);
  // l.insert_at_beginning(14);
  l.display();
  // cout<<l.LL_sorted_or_not();
  // l.insert_at_any_position(21,0);
  // l.insert_at_any_position(11,1);
  // l.insert_at_any_position(211,2);
  // l.insert_at_any_position(231,3);
     l.removeDuplicates();
  l.display();
  return 0;
}