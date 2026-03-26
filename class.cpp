#include<iostream>

class Stove{
	private:
		int temp = 0;
	public:
		Stove(int temp){
			settemp(temp);
		}
		int gettemp(){
			return temp;
		}
	void settemp(int temp){
		if (temp <0){
			this->temp = 0;
		}
		else if(temp >= 10){
			this->temp = 10;
		}
		else{this->temp = temp;
		}
		
	}
};


int main()
{
	Stove stove;
	stove.settemp();
	std::cout<<"The temperature setting is: "<<stove.gettemp();
	return 0;
}


