#include<iostream>
using namespace std;

void table(int n){
	cout<<"The table of "<<n<<" is: "<<endl;
	for(int i=1; i<=10; i++){
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
	}
}

int main(){
	int n;
	
	cout<<"Enter a number: ";
	cin>>n;
	
	table(n);
}
