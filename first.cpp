#include<iostream>

int main()
{
	std::string name;
	int age, age2;
	std::cout<<"what is your name: ";
	std::cin>>name;
	
	std::cout<<"what is your age: ";
	std::cin>>age;
	
	age2 = age + 1;
	
	std::cout<<"hello "<<name<<" you will be "<<age2<<" years next year";
	
	
	return 0;
}
