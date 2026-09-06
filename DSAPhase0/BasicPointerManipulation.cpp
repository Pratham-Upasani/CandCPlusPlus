//BasicPointerManipulation
#include<iostream>
using namespace std;

int main(){
	int x;
	
	cout<<"Enter the value of x: ";
	cin>>x;
	
	int *p=&x;
	
	cout<<"Value of x = "<<x<<endl;
	cout<<"Address of x = "<<&x<<endl;
	cout<<"Address stored in p = "<<p<<endl;
	cout<<"Value obtained using p = "<<*p<<endl;
	
	*p=100;
	cout<<"x="<<x<<endl;
}
