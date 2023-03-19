#include<iostream>
#include<stack>

//#include <bits/stdc++.h>
using namespace std;
void display(stack<int>s1)
{
	int n=s1.size();
	for(int i=0;i<n;i++){
		cout<<s1.top()<<" ";
		s1.pop();
	}
}
int main()
{
	// apart from making functions ,now we will make use of built in functions in stack library
	stack<int>s1;// here we are taking stack of type int you can take of float,char or ...
	s1.push(1);// push
	s1.push(2);
	s1.push(3);
	cout<<"elements of stack are  : ";
	display(s1);
	cout<<"\nafter pop :  ";
	s1.pop();// pop
	
	display(s1);
	cout<<"\nelement at top is : "<<s1.top()<<endl;// get top element
	cout<<"check for empty(0 or 1) : "<<s1.empty()<<endl;// check for empty
	cout<<"size of stack is : "<<s1.size()<<endl;// get the size
	stack<int>s2;
	stack<int>s3;
	for(int i=0;i<=5;i++)
	{
		s2.push(i*10);
	}
	for(int j=0;j<=5;j++)
	{
		s3.push(j*20);
	}
	s2.swap(s3);
	cout<<"display stack 2 : "<<endl;
	while(!s2 .empty())
	{
		cout<<s2.top()<<" ";
		s2.pop();
	}
	cout<<"\ndisplay stack 3 : "<<endl;
	while(!s3 .empty())
	{
		cout<<s3.top()<<" ";
		s3.pop();
	}
}
