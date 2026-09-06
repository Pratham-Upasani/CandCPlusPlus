//Pass by value - No changes in original variable
#include<iostream>
using namespace std;

void addFive(int num){
	num+=5;  //This is a copy variable(the parameter)
}

int main(){
	int num=10;
	addFive(num);
	cout<<"Num = "<<num;
}
