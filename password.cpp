#include<iostream>
#include<string>
using namespace std;

int main(){
	string text;
	cout<<"enter password"<<endl;
	
do{
	cin>>text;
	if("text" != "mark"){
		cout<<"password is incorrect\n";
	}	
}while("password" == "mark");
	
return 0;	
}
