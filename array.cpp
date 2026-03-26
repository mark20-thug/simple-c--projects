#include<iostream>

//storing data in an arry
int main(){

std::string foods[3];
int i;
std::cout<<"ENTER THE FOODS or DRINKS YOU WANT\n";
for(i = 0; i <= (sizeof(foods)/sizeof(foods[0])); i++){
	std::cin>>foods[i];
}
for(i = 0; i <= (sizeof(foods)/sizeof(foods[0])); i++){
	std::cout<<foods[i];
}

return 0;
}
