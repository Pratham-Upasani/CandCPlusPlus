//Pointers + Array + Function
//Create a function that double every element of the array(original array)
//Print the array before and after making changes
#include<iostream>
using namespace std;

void doublearray(int *p,int n){
	for(int i=0; i<n; i++){
		*(p+i)=(*(p+i))*2;
	}
}

int main(){
	int n;
	
	cout<<"Enter size of array: ";
	cin>>n;
	
	int arr[n];
	
	for(int i=0; i<n; i++){
		cout<<"Enter element in the array: ";
		cin>>arr[i];
	}
	
	cout<<endl<<"Array before change: ";
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	
	doublearray(arr,n);
	
	cout<<endl<<"Array after change: ";
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}


