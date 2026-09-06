#include<iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"Enter the number: ";
	cin>>n;
	
	//We need to calculate sum of digits of n
	int sum=0;
	int temp=n;
	
	while(temp!=0){
		int lastdigit=temp%10;
		temp/=10;
		sum+=lastdigit;
	}
	
	cout<<"The sum of digits of "<<n<<" is "<<sum<<endl;
}
