//Pass by Value VS Pass by Reference
#include<iostream>
using namespace std;

void swapByValue(int a,int b){
	int temp=a;
	a=b;
	b=temp;
}
void swapByReference(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

int main(){
	int x=10,y=20;
	
	swapByValue(x,y);
	cout<<"Value after swapping: x="<<x<<", y="<<y<<endl;
	
	swapByReference(x,y);
	cout<<"Value after swapping: x="<<x<<", y="<<y<<endl;
}
