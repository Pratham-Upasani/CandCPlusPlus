//Pass by reference - changes in actual variable
#include<iostream>
using namespace std;

void addFive(int &ref){
	ref+=5;
}

int main(){
	int num=5;
	addFive(num);
	cout<<"Num = "<<num;
}
