//Implement a stack using a class
#include<iostream>
using namespace std;

class Stack{
	int x[100];  //In c++, you must mention array size for c++ to allocate memory
	int top=-1;
	
	public:
		void push(int value){
			top++;
			x[top]=value;
		}
		void pop(){
			cout<<"Popped value = "<<x[top]<<endl;;
			top--;
		}
		void display(){
			for(int i=0; i<=top; i++){
				cout<<x[i]<<" ";
			}
		}
};

int main(){
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.display();
	s.pop();
	s.display();
}
