#include<iostream>
using namespace std;

class BankAccount{
	private:
		int accountNumber;
		float accountBalance;
		float newBalance;
	public: 
		void setDeposit(float actBal){
			accountBalance = actBal;
	}
		float getbalance(){
			return accountBalance;
		}
		void setwithdraw( float withdraw , float balance){
			if(balance > withdraw){
				
				newBalance = balance - withdraw;
			}
			else{
				cout<<"insurficient funds";
			}	
		}
		float getwithdrawBal(){
			return newBalance;
		}		
};
int main(){
	int choice;
	cout<<"wellcome to our bank"<<endl;
	cout<<"choose"<<endl;
	cout<<"1.deposite\n2.withdraw"<<endl;
	cin>>choice;
	BankAccount user1;
	
	if(choice = 1){
		user1.setDeposit(3000);
		cout<<"your balance is "<<user1.getbalance()<<endl;
	}
	else if(choice = 2){
		user1.setwithdraw(200, 3000);
		cout<<"your balance is "<<user1.getwithdrawBal()<<endl;
	} 
	else{
		cout<<"invalide input";
	}
}
