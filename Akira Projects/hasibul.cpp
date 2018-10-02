#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int role() { return rand()%6 +1;}
int main(){  srand(time(0));
int boss_money, gamer1_money, gamer2_money; boss_money= 100; gamer1_money=100; gamer2_money=100;
	while(true){
			int x = role() + role(); char y;
	if ((x%2) == 0) { y = 'c';} else { y='h'; }
	cout<<"You have $"<<boss_money<<"\n  Player1 has $"<<gamer1_money<<"\n  Player2 has $"<<gamer2_money<<endl;

	char gamer1_input, gamer2_input;
int gamer1 = rand()%2 +1; int gamer2 = rand()%2 +1;

	if (gamer1 == 1) { gamer1_input  = 'h';
	} else { gamer1_input = 'c';}
	if (gamer2 ==1) { gamer2_input ='h';
	} else { gamer2_input = 'c';}

int gamer1_bet = rand()%gamer1_money +1; int gamer2_bet = rand()%gamer2_money +1;
	cout<<"\nEnter 'c' (even) or 'h' (odd) an amount you bet:";

int you_bet; char you_input; cin>> you_input>> you_bet;

if ((you_input == y) && (gamer1_input == y) &&(gamer2_input ==y)) {
	cout<<"You bet $"<<you_bet<<" ->  won...\n"<<"Player1 bet $"<<gamer1_bet<<" -> won...\n"<<"Player2 bet $"<<gamer2_bet<<" -> won...\n"<<endl;
	boss_money+=you_bet; gamer1_money+=gamer1_bet; gamer2_money+=gamer2_bet;
	if ((boss_money <=0 ) || (gamer1_money <=0) || (gamer2_money <=0)) break; continue;

}else if((you_input != y) && (gamer1_input != y) && (gamer2_input != y)){
	cout<<"You bet $"<<you_bet<<" -> lost...\n"<<"Player1 bet $"<<gamer1_bet<<" -> lost...\n"<<"Player2 bet $"<<gamer2_bet<<" -> lost...\n"<<endl;
	boss_money-=you_bet; gamer1_money-=gamer1_bet; gamer2_money-=gamer2_bet;
	if ((boss_money <=0 ) || (gamer1_money <=0) || (gamer2_money <=0)) break; continue;

}else if((you_input == y) && (gamer1_input != y) && (gamer2_input != y)){
	cout<<"You bet $"<<you_bet<<" -> won...\n"<<"Player1 bet $"<<gamer1_bet<<" -> lost...\n"<<"Player2 bet $"<<gamer2_bet<<" -> lost...\n"<<endl;
	boss_money+=you_bet; gamer1_money-=gamer1_bet; gamer2_money-=gamer2_bet;
	if ((boss_money <=0 ) || (gamer1_money <=0) || (gamer2_money <=0)) break; continue;

}else if((you_input != y) && (gamer1_input == y) && (gamer2_input != y)){
	cout<<"You bet $"<<you_bet<<" -> lost...\n"<<"Player1 bet $"<<gamer1_bet<<" -> lost...\n"<<"Player2 bet $"<<gamer2_bet<<" -> won...\n"<<endl;
	boss_money-=you_bet; gamer1_money-=gamer1_bet; gamer2_money+=gamer2_bet;
	if ((boss_money <=0 ) || (gamer1_money <=0) || (gamer2_money <=0)) break; continue;

}else if((you_input != y) && (gamer1_input == y) && (gamer2_input == y)){
	cout<<"You bet $"<<you_bet<<" -> lost...\n"<<"Player1 bet $"<<gamer1_bet<<" -> won...\n"<<"Player2 bet $"<<gamer2_bet<<" -> won...\n"<<endl;
	boss_money-=you_bet; gamer1_money+=gamer1_bet; gamer2_money+=gamer2_bet;
	if ((boss_money <=0 ) || (gamer1_money <=0) || (gamer2_money <=0)) break; continue;

}else if((you_input == y) && (gamer1_input == y) && (gamer2_input != y)){
	cout<<"You bet $"<<you_bet<<" -> won...\n"<<"Player1 bet $"<<gamer1_bet<<" -> won...\n"<<"Player2 bet $"<<gamer2_bet<<" -> lost...\n"<<endl;
	boss_money+=you_bet; gamer1_money+=gamer1_bet; gamer2_money-=gamer2_bet;
	if ((boss_money <=0 ) || (gamer1_money <=0) || (gamer2_money <=0)) break; continue;

}else if((you_input == y) && (gamer1_input != y) && (gamer2_input == y)){
	cout<<"You bet $"<<you_bet<<" -> won...\n"<<"Player1 bet $"<<gamer1_bet<<" -> lost...\n"<<"Player2 bet $"<<gamer2_bet<<" -> won...\n"<<endl;;
	boss_money+=you_bet; gamer1_money-=gamer1_bet; gamer2_money+=gamer2_bet;
	if ((boss_money <=0 ) || (gamer1_money <=0) || (gamer2_money <=0)) break; continue;

}else if((you_input != y) && (gamer1_input == y) && (gamer2_input != y)){
	cout<<"You bet $"<<you_bet<<" -> lost...\n"<<"Player1 bet $"<<gamer1_bet<<" -> won...\n"<<"Player2 bet $"<<gamer2_bet<<" -> lost...\n"<<endl;
	boss_money-=you_bet; gamer1_money+=gamer1_bet; gamer2_money-=gamer2_bet;
	if ((boss_money <=0 ) || (gamer1_money <=0) || (gamer2_money <=0)) break; continue;
	}
	}
	cout<<"You are broke..."<<"\n"<<"Bye..."<<endl;
	return 0;
}
