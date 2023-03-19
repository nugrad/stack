#include <iostream>
using namespace std;


class node
{
	public:
    int data;

node *link;// next
};

class Stack{
	public:
		node*top;// head
	bool isempty()
{
 if(top == NULL)
 return true; else
 return false;
}

//Function to insert an element in stack
void push (int value)// insert at head
{
  node *newnode = new node();
  newnode->data = value;
  newnode->link = top;
  top = newnode;
}

//Function to delete an element from the stack
void pop ( )// delete at head
{
 if ( isempty() )
  cout<<"Stack is Empty";
 else
 {
  node *temp = top;
  top = top -> link;
  delete(temp);
 }
}

// Function to show the element at the top of the stack
void showTop()
{
 if ( isempty() )
  cout<<"Stack is Empty";
 else
  cout<<"Element at top is : "<< top->data;
}

// Function to Display the stack
void displayStack()
{
 if ( isempty() )
  cout<<"Stack is Empty";
 else
 {
  node *temp=top;
  while(temp!=NULL)
  {   cout<<temp->data<<" ";
   temp=temp->link;
  }
  cout<<"\n";
 }
 }
		
	
};





int main()
{
Stack s;
 int choice, flag=1, value;

 //Menu Driven Program using Switch
 while( flag == 1)
 {
 cout<<"\n1.Push 2.Pop 3.showTop 4.displayStack 5.exit\n";
 cin>>choice;
 switch (choice)
 {
 case 1: cout<<"Enter Value:\n";
         cin>>value;
         s.push(value);
         break;
 case 2: s.pop();
         break;
 case 3: s.showTop();
         break;
 case 4: s.displayStack();
         break;
 case 5: flag = 0;
         break;
 }
 }

return 0;
}
