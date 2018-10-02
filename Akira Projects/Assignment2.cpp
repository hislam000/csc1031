#include <iostream>
#include <cstdlib>
#include <chrono>
#include <ctime>
#include <string>
#include <cmath>
using namespace std;
	int offset (string mc_value, string writer_value){
		int penality = 0;
for( int i= 0; i< (mc_value.size()); i++){
	if(mc_value[i] != writer_value[i]){
		penality += (abs(writer_value[i] - mc_value[i]) * 2);
	}
	if(mc_value[i] == writer_value[i]){	}
}
for( int i= 0; i< (mc_value.size()); i++){
if(mc_value[i] > writer_value[i]){
		penality += ((mc_value.size()-writer_value.size())* 32);}
}
return penality;}
int main(){
	srand(time(0));
	while(true){
	int step=5;
	string a;
	string alpha_letter = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	int length = alpha_letter.size()-1;
		for(int i= 0; i< step; i++){
		a += alpha_letter[rand() % length];}
int time = 5000;int number = 1000;
		string writer_value;
		int player1_win =0;
		int player2_lose =0;
			//while(true){
//Line 23--while loop only changing the alpha letter
//And if I change to while loop from line 34-- Everything changing but not the alpha_letter !!!!


cout<<"Your current points "<<number<<", just type ["<<step<<"] -> "<<a<<":";
		auto start = chrono::high_resolution_clock::now();
		cin>> writer_value;
		auto end = chrono::high_resolution_clock::now();
	if (chrono::duration_cast<chrono::milliseconds>(end - start).count() < time ) {
	cout<<chrono::duration_cast<chrono::milliseconds>(end - start).count()<< " milliseconds, you made it within the interval of " <<time<<"..."<<endl;
	number += 100; player1_win += 1;
	if(player1_win == 3){ step+=1;} time-=250;}
	else {
		cout<<chrono::duration_cast<chrono::milliseconds>(end - start).count()<< " milliseconds, you *failed* it within the interval of " <<time<<"..."<<endl;
	number -= 100; player2_lose +=1;
	if(player2_lose == 3){ step-=1;} time+=250;}
	if(a== writer_value) {
	}
	else{
		cout <<"String offset is "<< ((offset (a, writer_value))/2)<<","<<" your penalty is "<<((offset (a, writer_value)))<<"..."<<endl;
	//number -=offset( a, writer_value);
	}
	}
		//cout<<"Make next round for not going back!!!"<<endl;
		cout<<"Bye...\n"<<"You lost..."<<endl;
	return 0;
	}

