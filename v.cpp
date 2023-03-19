#include <iostream>    
#include <stack>
#include <cstdlib>
using namespace std;
int main() {
	stack<int> st1;
	stack<int> st2;

	st1.emplace(12);
	st1.emplace(19);

	st2.emplace(20);
	st2.emplace(23);

	st1.swap(st2);

	cout << "st1 = ";
	while (!st1.empty()) {
		cout << st1.top() << " ";
		st1.pop();
	}

	cout << endl << "st2 = ";
	while (!st2.empty()) {
		cout << st2.top() << " ";
		st2.pop();
	}
}
