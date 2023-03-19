# include<iostream>
using namespace std;

class Stack
{
    int top;
    public:
    int a[10];  //Maximum size of Stack
    Stack()
    {
        top = -1;
    }
    
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
		if(top>=10)
		{
			cout<<"stack is full ! \n";
		}
		else{
			top++;
			a[top]=val;
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
			cout<<"element at top is : "<<a[top]<<"\n";
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
				cout<<"\t"<<a[i];
			}
		}
	}
	
    
};




int main() {

    Stack s1;
    s1.push(5);
    s1.push(6);
    s1.push(3);
    s1.display();
    cout<<"\n";
    s1.show_top();
    cout<<"after poping : \n";
    s1.pop();
    s1.display();
    }
