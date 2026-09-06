//Prime Check(A number is prime if it has only 2 factors i.e. 1 and the number itself)
#include<iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"Enter number: ";
	cin>>n;
	
	int factor=1;
	
	for(int i=2; i<=n; i++){
		if(n%i==0){
			factor++;
		}
	}
	if(factor==2){
		cout<<n<<" is prime.";
	}
	else{
		cout<<n<<" is not prime.";
	}
}
