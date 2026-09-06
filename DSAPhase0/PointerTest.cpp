//PointerTest
#include<iostream>
using namespace std;

int main(){
	int x=10;
	int* ptr=&x;
	
	cout<<x<<endl;  //10
	cout<<ptr<<endl;   //Some memory address
	cout<<*ptr<<endl;  //Value of x i.e. 10
	
	*ptr+=5;
	cout<<x<<endl;
}
