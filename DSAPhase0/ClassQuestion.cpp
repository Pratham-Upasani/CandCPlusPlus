#include<iostream>
using namespace std;

class BankAccount{
	public:
	string name;
	double balance;
	
		void deposit(int amount){
			if(amount<0)
				cout<<"Amount cannot be less than 0.";
			else
				balance+=amount;
		}
		
		void widthdraw(int amount){
			if (amount>balance)
				cout<<"Insufficient funds.";
			else
				balance-=amount;
		}
		
		void display(){
			cout<<"Balance = "<<balance<<endl;
		}
};

void transfer(BankAccount &from, BankAccount &to, double amount){
	if (from.balance>=amount){
		from.balance-=amount;
		to.balance+=amount;
	}
	else
		cout<<"Insufficient funds.";
}

int main(){
	BankAccount b1,b2;
	b1.deposit(2000);
	b1.deposit(4000);
	b2.deposit(7000);
	transfer(b1,b2,3000);
	b1.display();
	b2.display();
}
