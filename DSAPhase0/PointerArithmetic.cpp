//ArrayAndPointer
#include<iostream>
using namespace std;

int main(){
	int arr[]={10,20,30,40,50};
	
	//Print all values using pointer arithmetic
	int *p=arr; //array name hides base address inside it
	int sum=0;
	
	cout<<"All array elements are: ";
	for(int i=0; i<=4; i++){
		cout<<*(p+i)<<" ";
		sum+=*(p+i);
	}
	
	cout<<endl<<"Sum of all elements = "<<sum<<endl;
	
}
