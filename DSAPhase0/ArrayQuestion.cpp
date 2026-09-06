#include<iostream>
using namespace std;

int getSum(int a,int b,int c,int d,int e){
	int sum=a+b+c+d+e;
	return sum;
}

void getMinMax(int arr[], int size, int *minimum, int *maximum){
	*minimum=arr[0];
	*maximum=arr[0];
	
	for(int i=1; i<size; i++){
		if(arr[i]>=*maximum){
			*maximum=arr[i];
		}
		if(arr[i]<=*minimum){
			*minimum=arr[i];
		}
	}
}

void modifyNumber(int &x){
	cout<<"Enter a value: ";
	cin>>x;
}

int main(){
	int arr[5];
	
	cout<<"Enter elements in the array: ";
	for(int i=0; i<5; i++){
		cin>>arr[i];
	}
	
	cout<<"All the elements of the array are: ";
	for(int i=0; i<5; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	int sum=getSum(arr[0],arr[1],arr[2],arr[3],arr[4]);
	
	int min=0,max=0;
	
	getMinMax(arr,5,&min,&max);
	
	int x=5;
	modifyNumber(x);
	
	cout<<"Sum of all elements = "<<sum<<endl;
	cout<<"Minimum element = "<<min<<", Maximum element = "<<max<<endl;
	cout<<"Value of x = "<<x<<endl;
}
