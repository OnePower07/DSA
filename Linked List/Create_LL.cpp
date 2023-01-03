#include<iostream>
using namespace std;

class Node{
    private:
    int data;
    Node *next;

    public:
    void insert(int x); //insertion at the head;
    void display();
};
    Node *head;
    void Node::insert(int x)
    {
      Node *temp = new Node();
      temp-> data = x;
      temp-> next = head;
      head=temp;
    }
    void Node :: display()
    {
      Node *temp = head;
      cout<<"List is: ";
      while(temp != NULL)
      {
        cout<<temp->data<<" "<<endl;
        temp = temp->next;
      }
    }
int main()
{
  Node list;
  head = NULL;
  int size,n;
  cout<<"Enter Size: ";
  cin>>size;
  for(int i=1;i<=size;i++)
  {
    cout<<"Enter Number: ";
    cin>>n;
    list.insert(n);
    list.display(); 
  }
  return 0;
}