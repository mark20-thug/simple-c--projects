#include<iostream>

void swapping(int &x, int &y);

int main()
{
	int x, y;
	std::cout<<"ENTER PONTS FOR TEAM X: ";
	std::cin>>x;
	
	std::cout<<"ENTER PONTS FOR TEAM Y: ";
	std::cin>>y;
	
	std::cout<<"X HAS "<<x<<" POINTS\n";
	std::cout<<"Y HAS "<<y<<" POINTS\n";
	swapping(x, y);
return 0;	
}
void swapping(int &x, int &y){
std::cout<<"SWAPPING IS SUCCESFULLY DONE\n";
int temp;
temp = x;
x = y;
y = temp;
std::cout<<"AFTER SWAPPING #\n";
std::cout<<"X HAS "<<x<<" POINTS\n";
std::cout<<"Y HAS "<<y<<" POINTS\n";

}
