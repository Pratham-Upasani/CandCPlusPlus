//Simple class
#include<iostream>
using namespace std;

class BankAccount{
	double balance;
	
	public:
		void deposit(double amount){
			balance+=amount;
		}
		void get_balance(){
			cout<<balance<<endl;
		}
};

int main(){
	BankAccount b1;
	b1.deposit(400.0);
	b1.get_balance();
}
