#include<iostream>
#include<iomanip>
using namespace std;
void checkBalance(double balance);
double Deposit();
double withdraw(double balance);
int main()
{
	int chose;
	double balance = 0;
	cout<<"########### ATM ###########\n";
	do{
	cout<<"1.check balance\n";
	cout<<"2.Deposit\n";
	cout<<"3.Withdraw\n";
	cout<<"4.Exit\n";
	cout<<"choose from the menu(1-4): ";
	cin>>chose;
	std::cin.clear();
	fflush(stdin);
	
	switch(chose){
	case 1:checkBalance(balance);
		break;
	case 2:balance +=Deposit();
		checkBalance(balance);
		break;
	case 3:balance -=withdraw(balance);
		checkBalance(balance);
		break;
	case 4:cout<<"thank you";
		break;
	default:
		cout<<"invalid! plz choose from the menu(1-4): ";
		break;
	}
}while(chose != 4);

return 0;	
}
void checkBalance(double balance){
	cout<<"the balance is: $ "<< std::setprecision(2) << std::fixed<<balance << '\n';
}
double Deposit(){
	double balance;
	double amount;
	cout<<"Enter amount to deposit: ";
	cin>>amount;
	if(amount <= 0){
		cout<<"invalide input";
		return 0;
	}
	return amount;	
}
double withdraw(double balance){
	double amount;
	cout<<"Enter amont to withdraw: ";
	cin>>amount;
	if(amount <= 0){
		cout<<"invalide amount";
		return 0;
	}
	else if(amount > balance){
		cout<<"insafficient funds";
		return 0;
	}
	return amount;
}
