#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int menu;
	int mn2;
	cout<<"THE AIRTEL MENU\n";
	cout<<"1.sms\n2.data\n3.minutes\n4.mobile money\n5.quit\n";
	do{
		
		cout<<"choose from the menu:";
		std::cin>>menu;
		cin.clear();
		fflush(stdin);
		
		switch(menu){
		case 1:std::cout<<"1.daily\n2.weekly\n3.monthly\n4.quit\n";
		do{
		std::cout<<"choose from this list: ";
		cin>>mn2;
		cin.clear();
		fflush(stdin);
			switch(mn2){
				case 1:std::cout<<"choose a bundle\n";
				std::cout<<"1.20mbs\n2.30mbs\n3.60mbs\n";
				break;
				
				case 2:std::cout<<"choose a bundle\n";
				std::cout<<"1.200mbs\n2.300mbs\n3.600mbs\n";
				break;
				
				case 3:std::cout<<"choose a bundle\n";
				std::cout<<"1.20gbs\n2.30gbs\n3.60gbs\n";
				break;
				case 4:std::cout<<"thank you\n";
				break;
				default:std::cout<<"invalide!";
				break;
			}
		}while(mn2 != 4);
		break;
		case 2:std::cout<<"1.daily\n2.weekly\n3.monthly\n4.quit\n";
		do{
		std::cout<<"choose from the menu: ";
		cin>>mn2;
		cin.clear();
		fflush(stdin);
			switch(mn2){
				case 1:std::cout<<"choose a bundel\n";
				std::cout<<"1.20mbs\n2.30mbs\n3.60mbs\n";
				break;
				
				case 2:std::cout<<"choose a bundel\n";
				std::cout<<"1.200mbs\n2.300mbs\n3.600mbs\n";
				break;
				
				case 3:std::cout<<"choose a bundel\n";
				std::cout<<"1.20gbs\n2.30gbs\n3.60gbs\n";
				break;
				case 4:std::cout<<"thank you";
				break;
				default:std::cout<<"invalide!";
				break;
			}
		}while(mn2 != 4);
		break;
		case 3:std::cout<<"1.daily\n2.weekly\n3.monthly\n4.quit\n";
		do{
		std::cout<<"choose from the menu: ";
		cin>>mn2;
		cin.clear();
		fflush(stdin);
			switch(mn2){
				case 1:std::cout<<"choose a bundel\n";
				std::cout<<"1.20mbs\n2.30mbs\n3.60mbs\n";
				break;
				case 2:std::cout<<"choose a bundel\n";
				std::cout<<"1.200mbs\n2.300mbs\n3.600mbs\n";
				break;
				case 3:std::cout<<"choose a bundel\n";
				std::cout<<"1.20gbs\n2.30gbs\n3.60gbs\n";
				break;
				case 4:std::cout<<"thank you";
				break;
				default:std::cout<<"invalide!";
				break;
			}
		}while(mn2 != 4);
		break;
		case 4:std::cout<<"1.daily\n2.weekly\n3.monthly\n4.quit\n";
			break;
		do{
		std::cout<<"choose from the menu: ";
		cin>>mn2;
		cin.clear();
		fflush(stdin);
			switch(mn2){
				case 1:std::cout<<"choose a bundel"<<'\n';
				std::cout<<"1.20mbs\n2.30mbs\n3.60mbs\n";
				break;
				
				case 2:std::cout<<"choose a bundel\n";
				std::cout<<"1.200mbs\n2.300mbs\n3.600mbs\n";
				break;
				case 3:std::cout<<"choose a bundel\n";
				std::cout<<"1.20gbs\n2.30gbs\n3.60gbs\n";
				break;
				case 4:std::cout<<"thank you\n";
				break;
				default:std::cout<<"invalide!";
				break;
			}
		}while(mn2 != 4);
		break;
		case 5:std::cout<<"thank you\n";
		break;
		default:std::cout<<"inalide input\n";
		break;
	}
	}while(menu != 5);
return 0;	
}

