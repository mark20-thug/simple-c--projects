#include<iostream>
#include<ctime>
using namespace std;

int main(){
	srand(time(NULL));
    int computer;
    
    int player = 0;
    
    cout<<"==choose a number=="<<endl;
    while(true){
    cout<<"1.ROCK\n2.PAPER\n3.SCISSORS\n4.EXIT\n";
    cin>>player;
    if(player == 4) break;
    if(player < 1 || player > 3){
        cout<<"!!choose again!!"<<endl;
        continue;
    }
    computer = rand()%3 + 1;
	
	if(player == 1){
        if(computer == 1){
            cout<<"the computer chose rock\nIT'S A TIE\n";
        }
        else if(computer == 2 ){
            cout<<"the computer chose paper\nYOU LOSE\n";
        }
        else if(computer == 3 ){
            cout<<"the computer chose scissors\nYOU WIN\n";
        }
   }
	
	else if(player == 2){
		if(computer == 1){
			cout<<"the computer choose rock\nYOU WIN\n";
		}
		else if(computer == 2 ){
            cout<<"the computer chose paper\nIT'S A TIE\n";
		}
		else if(computer == 3 ){
			cout<<"the computer choose scissors\nYOU LOSE\n";
		}	
	}
	else if(player == 3){
				if(computer == 1){
			cout<<"the computer choose rock\nYOU LOSE\n";
		}
		else if(computer == 2 ){
			cout<<"the computer choose papper\nYOU WIN\n";
		}
		else if(computer == 3 ){
            cout<<"the computer chose scissors\nIT'S A TIE\n";
		}
	}
	else{
		cout<<"!!choose a gain!!"<<endl;
	}
 }
	
	
	
	return 0;
}
