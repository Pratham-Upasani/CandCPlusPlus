//Structure Question
#include<iostream>
using namespace std;

struct Student{
	string name;
	int rollno;
	int marks;
};

void findtopper(Student arr[],int n){
	Student max=arr[0];
	for(int i=1; i<n; i++){
		if(arr[i].marks>=max.marks){
			max=arr[i];
		}
	}
	
	cout<<"Topper's name = "<<max.name<<", marks = "<<max.marks<<", rollno = "<<max.rollno<<endl;
}

int main(){
	Student s1,s2,s3;
	
	s1.name="Rajesh";
	s1.rollno=1;
	s1.marks=20;
	
	s2.name="Rakesh";
	s2.rollno=2;
	s2.marks=49;
	
	s3.name="Kailash";
	s3.rollno=3;
	s3.marks=43;
	
	Student arr[]={s1,s2,s3};
	
	findtopper(arr,3);
}
