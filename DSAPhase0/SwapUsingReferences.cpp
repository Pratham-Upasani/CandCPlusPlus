//SwapUsingReferences
#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

int main(){
	int x,y;
	
	cout<<"Enter value of x: ";
	cin>>x;
	
	cout<<"Enter value of y: ";
	cin>>y;
	
	cout<<"Before swapping: x="<<x<<", y="<<y<<endl;
	swap(x,y);
	cout<<"After swapping: x="<<x<<", y="<<y<<endl;
}
