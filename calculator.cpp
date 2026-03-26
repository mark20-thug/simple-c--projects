#include<iostream>
using namespace std;

// asimple calculator

int main(){
	char operation;
	float x,y, result;
	cout<<"=====A SIMPLE CALCULATOR=====\n";
	cout<<"choose an operation(+, -, *, /):";
	cin>>operation;
	cout<<"enter number(1): ";
	cin>>x;
	cout<<"enter number(2): ";
	cin>>y;
	switch(operation){
		case '+':
			result = x + y;
			cout<<result<<endl;
		break;
			
		case '-':
			result = x - y;
			cout<<result<<endl;
		break;
		
		case '*':
			result = x * y;
			cout<<result<<endl;
		break;
		case '/':
			if(y != 0){
			result = x / y;
			cout<<result<<endl;
		}
		else{
			cout<<"Math error";
		}
		break;
		default:
			cout<<"invalide operation";	
		break;	
	}
	
	
}
