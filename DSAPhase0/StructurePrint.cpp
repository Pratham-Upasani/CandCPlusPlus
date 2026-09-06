#include<iostream>
using namespace std;

struct Student{
	string name;
	int marks[3];
	float average=0;
};

Student createStudent(){
	Student s;
	
	cout<<"Enter Student's name: ";
	cin>>s.name;
	
	cout<<"Enter Student's marks: ";
	for(int i=0; i<3; i++){
		cin>>s.marks[i];
	}
	
	return s;
}

void displayStudent(Student s){
	cout<<"Student's name = "<<s.name<<endl;
	cout<<"Student's marks = ";
	for(int i=0; i<3; i++){
		cout<<s.marks[i]<<" ";
	}
	cout<<endl<<"Student's average marks = "<<s.average<<endl;
}

void calculateAverage(Student &z){
	int sum=0;
	for(int i=0; i<3; i++){
		sum+=z.marks[i];
	}
	z.average=sum/3;
}

int main(){
	Student s = createStudent();
	calculateAverage(s);
	displayStudent(s);
}
