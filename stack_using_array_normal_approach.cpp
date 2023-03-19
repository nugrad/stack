#include <iostream>
using namespace std;

#define SIZE 5
int A[SIZE];
int top = -1;

bool isEmpty()
    {
    	if(top==-1)
    	{
    		return true;
		}
		else{
			return false;
		}
	}

void push(int val)
	{
		if(top==SIZE-1)
		{
			cout<<"stack is full ! \n";
		}
		else{
			top++;
			A[top]=val;
		}
	}

void pop()
	{
		if(isEmpty())
		{
			cout<<"stack is empty ! \n";
		}
		else{
			top--;
		}
	}

void show_top()
	{
		if(isEmpty())
		{
			cout<<"stack is empty ! \n";
		}
		else{
			cout<<"element at top is : "<<A[top]<<"\n";
		}
	}
	void display()
	{
		if(isEmpty())
		{
			cout<<"stack is empty ! \n";
		}
		else{
			for(int i=0;i<=top;i++)
			{
				cout<<"\t"<<A[i];
			}
		}
	}





int main()
{
int choice,  value,fl=1;
 while(fl==1)
 {
 cout<<"\n1.PUSH\n2.POP\n3.SHOW_TOP\n4.DISPLAY_STACK\n5.EXIT\n";
 cout<<"enter your choice : ";
 cin>>choice; 
 switch (choice){
 case 1: cout<<"Enter Value:\n";
         cin>>value;
         push(value);
         break;
 case 2: pop();
         break;
 case 3: show_top();
         break;
 case 4: display();
         break;
}
}
  return 0;
}
