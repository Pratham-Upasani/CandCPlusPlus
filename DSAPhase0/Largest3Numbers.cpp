#include<iostream>
using namespace std;

int largest(int a,int b,int c){
	if(a>b && a>c){
		return a;
	}
	else if(b>a && b>c){
		return b;
	}
	else if(a==b && a==c){
		return 0;
	}
	else{
		return c;
	}
}

int main(){
	int a,b,c;
	
	cout<<"Enter value of a: ";
	cin>>a;
	
	cout<<"Enter value of b: ";
	cin>>b;
	
	cout<<"Enter value of c: ";
	cin>>c;
	
	int result=largest(a,b,c); 
	
	if(result!=0){
		cout<<result<<" is largest.";
	}
	else{
		cout<<"All values are same.";
	}
}
