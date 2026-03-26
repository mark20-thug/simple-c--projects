#include<iostream>
using std::string;

class Employee{
	public:
	string Name;
	string Company;
	int Age;
	void introduce(){
		std::cout<<"These are my Details" << std::endl;
		std::cout<<"NAME: "<< Name << std::endl;
		std::cout<<"COMPANY: "<< Company <<std::endl;
		std::cout<<"AGE: "<< Age << std::endl;
	}
	Employee(string name, string company, int age){
		Name = name;
		Company = company;
		Age = age;
	}
};

int main(){
	Employee employee1 = Employee("Mark", "ALPHABET(Google)", 20);
	employee1.introduce();
	std::cout<<"\n";
	Employee employee2 = Employee("Profy", "Profy Tech", 21);
	employee2.introduce();
	std::cout<<"\n";
	Employee employee3 = Employee("Katabi", "Micrisoft", 21);
	employee3.introduce();
	
}
