//Structure
#include<iostream>
using namespace std;

struct student{  //Structure is a datatype that holds data of multiple types within it
	string name;	//Just like an array but store data of multiple types
	int age;
	bool enrolled=true;  //Default value(can be changed later)
};

int main(){
	student s1;  //Use structure just like a datatype
	s1.name="Raj";  
	s1.age=20;
	
	student s2;  //Assume structure just like a datatype
	s2.name="Rajvir";
	s2.age=40;
	
	student s3;
	s3.name="Mukesh";
	s3.age=25;
	s3.enrolled=false;
	
	cout<<" "<<s1.name<<" "<<s1.age<<" "<<s1.enrolled<<endl;
	cout<<" "<<s2.name<<" "<<s2.age<<" "<<s2.enrolled<<endl;
	cout<<" "<<s3.name<<" "<<s3.age<<" "<<s3.enrolled<<endl;
}


