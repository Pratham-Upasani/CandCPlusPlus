#include<iostream>
using namespace std;

int palindrome_check(int n){
	int rev=0,temp=n;
	
	while(temp!=0){
		int lastdigit=temp%10;
		rev=(rev*10)+lastdigit;
		temp/=10;
	}
	
	if(rev==n)
		return 1;
	else
		return -1;
}

int main(){
	int n;
	
	cout<<"Enter a number: ";
	cin>>n;
	
	int result=palindrome_check(n);
	
	if(result==-1)
		cout<<n<<" is not palindrome.";
	else
		cout<<n<<" is palindrome.";
}
