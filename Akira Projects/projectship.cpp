#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;

void ship_sails() {
    string mix[] = {"SA","S2","S3","S4","S5","S6","S7","S8","S9","S10","SJ","SQ","SK","CA","C2","C3","C4","C5","C6","C7","C8","C9","C10","CJ","CQ","CK","HA","H2","H3","H4","H5","H6","H7","H8","H9","H10","HJ","HQ","HK","DA","D2","D3","D4","D5","D6","D7","D8","D9","D10","DJ","DQ","DK"};               
    string letter[]={ "a","b","c","d","e","f","g"}; //count as 0,1,2,3,4,5,6. 
vector<string>boatype(mix, mix+52); 
vector<string>people0; vector<string>people1;  vector<string>people2;  vector<string>people3; vector<string>people4; //five player
      
  for(int i = 0; i< 7; i++){  int inside = rand() % boatype.size(); people0.push_back(boatype[inside]); }
  for(int i = 0; i< 7; i++){  int inside = rand() % boatype.size(); people1.push_back(boatype[inside]); }
  for(int i = 0; i< 7; i++){  int inside = rand() % boatype.size(); people2.push_back(boatype[inside]); }
  for(int i = 0; i< 7; i++){  int inside = rand() % boatype.size(); people3.push_back(boatype[inside]); } 
  for(int i = 0; i< 7; i++){  int inside = rand() % boatype.size(); people4.push_back(boatype[inside]);}
string l, m, n, o, p, q, r; //making new string to get if the any player won he match with if statement

while(true){    
l = people0[0]; m = people0[1]; n = people0[2]; o = people0[3]; p = people0[4]; q = people0[5]; r = people0[6];
 if ((l[0]=='D')&&(m[0]=='D')&&(n[0]=='D')&&(o[0]=='D')&&(p[0]=='D')&&(q[0]=='D')&&(r[0]=='D')){cout<<"My Ship Sails! --- Player 0 won...\n"<<endl; break;}
 if ((l[0]=='H')&&(m[0]=='H')&&(n[0]=='H')&&(o[0]=='H')&&(p[0]=='H')&&(q[0]=='H')&&(r[0]=='H')){cout<<"My Ship Sails! --- Player 0 won...\n"<<endl; break;}
 if ((l[0]=='C')&&(m[0]=='C')&&(n[0]=='C')&&(o[0]=='C')&&(p[0]=='C')&&(q[0]=='C')&&(r[0]=='C')){cout<<"My Ship Sails! --- Player 0 won...\n"<<endl; break;}
 if ((l[0]=='S')&&(m[0]=='S')&&(n[0]=='S')&&(o[0]=='S')&&(p[0]=='S')&&(q[0]=='S')&&(r[0]=='S')){cout<<"My Ship Sails! --- Player 0 won...\n"<<endl; break;}
 
 l = people1[0]; m = people1[1]; n = people1[2]; o = people1[3]; p = people1[4]; q = people1[5]; r = people1[6];
 if ((l[1]=='D')&&(m[1]=='D')&&(n[1]=='D')&&(o[1]=='D')&&(p[1]=='D')&&(q[1]=='D')&&(r[1]=='D')){cout<<"My Ship Sails! --- Player 1 won...\n"<<endl; break;}
 if ((l[1]=='H')&&(m[1]=='H')&&(n[1]=='H')&&(o[1]=='H')&&(p[1]=='H')&&(q[1]=='H')&&(r[1]=='H')){cout<<"My Ship Sails! --- Player 1 won...\n"<<endl; break;}
 if ((l[1]=='C')&&(m[1]=='C')&&(n[1]=='C')&&(o[1]=='C')&&(p[1]=='C')&&(q[1]=='C')&&(r[1]=='C')){cout<<"My Ship Sails! --- Player 1 won...\n"<<endl; break;}
 if ((l[1]=='S')&&(m[1]=='S')&&(n[1]=='S')&&(o[1]=='S')&&(p[1]=='S')&&(q[1]=='S')&&(r[1]=='S')){cout<<"My Ship Sails! --- Player 1 won...\n"<<endl; break;}
 
 l = people2[0]; m = people2[1]; n = people2[2]; o = people2[3]; p = people2[4]; q = people2[5]; r = people2[6];
 if ((l[2]=='D')&&(m[2]=='D')&&(n[2]=='D')&&(o[2]=='D')&&(p[2]=='D')&&(q[2]=='D')&&(r[2]=='D')){cout<<"My Ship Sails! --- Player 2 won...\n"<<endl; break;}
 if ((l[2]=='H')&&(m[2]=='H')&&(n[2]=='H')&&(o[2]=='H')&&(p[2]=='H')&&(q[2]=='H')&&(r[2]=='H')){cout<<"My Ship Sails! --- Player 2 won...\n"<<endl; break;}
 if ((l[2]=='C')&&(m[2]=='C')&&(n[2]=='C')&&(o[2]=='C')&&(p[2]=='C')&&(q[2]=='C')&&(r[2]=='C')){cout<<"My Ship Sails! --- Player 2 won...\n"<<endl; break;}
 if ((l[2]=='S')&&(m[2]=='S')&&(n[2]=='S')&&(o[2]=='S')&&(p[2]=='S')&&(q[2]=='S')&&(r[2]=='S')){cout<<"My Ship Sails! --- Player 2 won...\n"<<endl; break;}
 
 l = people3[0]; m = people3[1]; n = people3[2]; o = people3[3]; p = people3[4]; q = people3[5]; r = people3[6];
 if ((l[3]=='D')&&(m[3]=='D')&&(n[3]=='D')&&(o[3]=='D')&&(p[3]=='D')&&(q[3]=='D')&&(r[3]=='D')){cout<<"My Ship Sails! --- Player 3 won...\n"<<endl; break;}
 if ((l[3]=='H')&&(m[3]=='H')&&(n[3]=='H')&&(o[3]=='H')&&(p[3]=='H')&&(q[3]=='H')&&(r[3]=='H')){cout<<"My Ship Sails! --- Player 3 won...\n"<<endl; break;}
 if ((l[3]=='C')&&(m[3]=='C')&&(n[3]=='C')&&(o[3]=='C')&&(p[3]=='C')&&(q[3]=='C')&&(r[3]=='C')){cout<<"My Ship Sails! --- Player 3 won...\n"<<endl; break;}
 if ((l[3]=='S')&&(m[3]=='S')&&(n[3]=='S')&&(o[3]=='S')&&(p[3]=='S')&&(q[3]=='S')&&(r[3]=='S')){cout<<"My Ship Sails! --- Player 3 won...\n"<<endl; break;}
 
 l = people4[0]; m = people4[1]; n = people4[2]; o = people4[3]; p = people4[4]; q = people4[5]; r = people4[6];
 if ((l[4]=='D')&&(m[4]=='D')&&(n[4]=='D')&&(o[4]=='D')&&(p[4]=='D')&&(q[4]=='D')&&(r[4]=='D')){cout<<"My Ship Sails! --- Player 4 won...\n"<<endl; break;}
 if ((l[4]=='H')&&(m[4]=='H')&&(n[4]=='H')&&(o[4]=='H')&&(p[4]=='H')&&(q[4]=='H')&&(r[4]=='H')){cout<<"My Ship Sails! --- Player 4 won...\n"<<endl; break;}
 if ((l[4]=='C')&&(m[4]=='C')&&(n[4]=='C')&&(o[4]=='C')&&(p[4]=='C')&&(q[4]=='C')&&(r[4]=='C')){cout<<"My Ship Sails! --- Player 4 won...\n"<<endl; break;}
 if ((l[4]=='S')&&(m[4]=='S')&&(n[4]=='S')&&(o[4]=='S')&&(p[4]=='S')&&(q[4]=='S')&&(r[4]=='S')){cout<<"My Ship Sails! --- Player 4 won...\n"<<endl; break;}
 
char z; cout<<endl; for(int i = 0; i < 7; i++){ cout<<"("<<letter[i]<<") "<<people0[i]<<" ";
  }
    cout<<"\nWhich one to replace? ";  cin >> z;
      if(( z!='a')&&(z!='b')&&(z!='c')&&(z!='d')&&(z!='e')&&(z!='f')&&(z!='f')&&(z!='g')&&(z!='?')){
    cout<<"Wrong input! "<<endl;
     }      
//Making 0 to 6 if statement that print when you enter the which one to replace? a,b.c.d.e.f.g.
//Alos making if statment for ? to print all the player 1,2,3,4;
if(z == 'a') { //Making, if statement for a
	int rule1 = rand()%people2.size(); int rule2 = rand()%people1.size(); 
    int rule3 = rand()%people3.size(); int rule4 = rand()%people4.size();
    
    people1.push_back(people0[0]);
    people2.push_back(people1[rule2]);people3.push_back(people2[rule1]);
    people4.push_back(people3[rule3]);people0.push_back(people4[rule4]);
    
    cout<<"Hint: player 0 passed "<< people0[0] <<" to player 1"; 
    cout<<"\nHint: player 1 passed "<< people1[rule2] <<" to player 2"; cout<<"\nHint: player 2 passed "<< people2[rule1] <<" to player 3"; 
    cout<<"\nHint: player 3 passed "<< people3[rule3] <<" to player 4"; cout<<"\nHint: player 4 passed "<< people4[rule4] <<" to player 0"; 
    
    people0.erase(people0.begin());
    people1.erase(people1.begin()+rule2); people2.erase(people2.begin()+rule1);
    people3.erase(people3.begin()+rule3); people4.erase(people4.begin()+rule4); cout<<endl; }

if( z == 'b'){   //Making, if statement for b
    int rule1 = rand()%people2.size(); int rule2 = rand()%people1.size(); 
    int rule3 = rand()%people3.size(); int rule4 = rand()%people4.size();
    
    people1.push_back(people0[1]);
    people2.push_back(people1[rule2]);people3.push_back(people2[rule1]);
    people4.push_back(people3[rule3]);people0.push_back(people4[rule4]);
    
   
    cout<<"Hint: player 0 passed "<< people0[1] <<" to player 1"; 
    cout<<"\nHint: player 1 passed "<< people1[rule2] <<" to player 2"; cout<<"\nHint: player 2 passed "<< people2[rule1] <<" to player 3"; 
    cout<<"\nHint: player 3 passed "<< people3[rule3] <<" to player 4"; cout<<"\nHint: player 4 passed "<< people4[rule4] <<" to player 0"; 
    
    people0.erase(people0.begin()+1);//
    people1.erase(people1.begin()+rule2); people2.erase(people2.begin()+rule1);
    people3.erase(people3.begin()+rule3);people4.erase(people4.begin()+rule4); cout<<endl;}

if( z == 'c'){   //Making, if statement for c
    int rule1 = rand()%people2.size(); int rule2 = rand()%people1.size(); 
    int rule3 = rand()%people3.size(); int rule4 = rand()%people4.size();
    
    people1.push_back(people0[2]);
    people2.push_back(people1[rule2]);people3.push_back(people2[rule1]);
    people4.push_back(people3[rule3]);people0.push_back(people4[rule4]);
    
    cout<<"Hint: player 0 passed "<< people0[2] <<" to player 1";  
    cout<<"\nHint: player 1 passed "<< people1[rule2] <<" to player 2"; cout<<"\nHint: player 2 passed "<< people2[rule1] <<" to player 3"; 
    cout<<"\nHint: player 3 passed "<< people3[rule3] <<" to player 4"; cout<<"\nHint: player 4 passed "<< people4[rule4] <<" to player 0"; 
    
    people0.erase(people0.begin()+2);
    people1.erase(people1.begin()+rule2); people2.erase(people2.begin()+rule1);
    people3.erase(people3.begin()+rule3);people4.erase(people4.begin()+rule4); cout<<endl;}
   
if( z == 'd'){  //Making, if statement for d
    int rule1 = rand()%people2.size(); int rule2 = rand()%people1.size(); 
    int rule3 = rand()%people3.size(); int rule4 = rand()%people4.size();
    
    people1.push_back(people0[3]);
    people2.push_back(people1[rule2]);people3.push_back(people2[rule1]);
    people4.push_back(people3[rule3]);people0.push_back(people4[rule4]);
    
    cout<<"Hint: player 0 passed "<< people0[3] <<" to player 1";
    cout<<"\nHint: player 1 passed "<< people1[rule2] <<" to player 2"; cout<<"\nHint: player 2 passed "<< people2[rule1] <<" to player 3"; 
    cout<<"\nHint: player 3 passed "<< people3[rule3] <<" to player 4"; cout<<"\nHint: player 4 passed "<< people4[rule4] <<" to player 0"; 
    
    people0.erase(people0.begin()+3);
    people1.erase(people1.begin()+rule2); people2.erase(people2.begin()+rule1);
    people3.erase(people3.begin()+rule3); people4.erase(people4.begin()+rule4); cout<<endl;}
  
if( z == 'e'){   //Making, if statement for e
    int rule1 = rand()%people2.size(); int rule2 = rand()%people1.size(); 
    int rule3 = rand()%people3.size(); int rule4 = rand()%people4.size();
    
    people1.push_back(people0[4]);
    people2.push_back(people1[rule2]);people3.push_back(people2[rule1]);
    people4.push_back(people3[rule3]);people0.push_back(people4[rule4]);
    
    cout<<"Hint: player 0 passed "<< people0[4] <<" to player 1";
    cout<<"\nHint: player 1 passed "<< people1[rule2] <<" to player 2"; cout<<"\nHint: player 2 passed "<< people2[rule1] <<" to player 3"; 
    cout<<"\nHint: player 3 passed "<< people3[rule3] <<" to player 4"; cout<<"\nHint: player 4 passed "<< people4[rule4] <<" to player 0"; 
    
    people0.erase(people0.begin()+4);
    people1.erase(people1.begin()+rule2); people2.erase(people2.begin()+rule1);
    people3.erase(people3.begin()+rule3); people4.erase(people4.begin()+rule4); cout<<endl;}
   
if( z == 'f'){   //Making, if statement for f 
int rule1 = rand()%people2.size(); int rule2 = rand()%people1.size(); 
    int rule3 = rand()%people3.size(); 
    int rule4 = rand()%people4.size();
    
people1.push_back(people0[5]);
people2.push_back(people1[rule2]); people3.push_back(people2[rule1]);
people4.push_back(people3[rule3]); people0.push_back(people4[rule4]);
       
    cout<<"Hint: player 0 passed "<< people0[5] <<" to player 1";    
    cout<<"\nHint: player 1 passed "<< people1[rule2] <<" to player 2"; cout<<"\nHint: player 2 passed "<< people2[rule1] <<" to player 3"; 
    cout<<"\nHint: player 3 passed "<< people3[rule3] <<" to player 4"; cout<<"\nHint: player 4 passed "<< people4[rule4] <<" to player 0"; 
    
people0.erase(people0.begin()+5); 
people1.erase(people1.begin()+rule2); people2.erase(people2.begin()+rule1); 
people3.erase(people3.begin()+rule3); people4.erase(people4.begin()+rule4); cout<<endl;}

if( z == 'g'){   //Making, if statement for g 
int rule1 = rand()%people2.size(); int rule2 = rand()%people1.size(); 
int rule3 = rand()%people3.size(); int rule4 = rand()%people4.size();
    
people1.push_back(people0[6]); 
people2.push_back(people1[rule2]); people3.push_back(people2[rule1]); 
people4.push_back(people3[rule3]); people0.push_back(people4[rule4]);
    
    cout<<"Hint: player 0 passed "<< people0[6] <<" to player 1";
    cout<<"\nHint: player 1 passed "<< people1[rule2] <<" to player 2";
    cout<<"\nHint: player 2 passed "<< people2[rule1] <<" to player 3"; 
    cout<<"\nHint: player 3 passed "<< people3[rule3] <<" to player 4"; 
    cout<<"\nHint: player 4 passed "<< people4[rule4] <<" to player 0"; 
    
people0.erase(people0.begin()+6); 
people1.erase(people1.begin()+rule2); people2.erase(people2.begin()+rule1); 
people3.erase(people3.begin()+rule3); people4.erase(people4.begin()+rule4); cout<<endl;
   }
if( z == '?'){  //Making, if statement for ?
          cout<<"Player 1 "; for(int i = 0; i< 7; i++){ cout<<"("<<letter[i]<<") "<<people1[i]<<" ";} cout<<"\n";
          cout<<"Player 2 "; for(int i = 0; i< 7; i++){ cout<<"("<<letter[i]<<") "<<people2[i]<<" ";} cout<<"\n";
          cout<<"Player 3 "; for(int i = 0; i< 7; i++){ cout<<"("<<letter[i]<<") "<<people3[i]<<" ";} cout<<"\n";
          cout<<"Player 4 "; for(int i = 0; i< 7; i++){ cout<<"("<<letter[i]<<") "<<people4[i]<<" ";} cout<<"\n"; }
     
}cout<<endl; cout<<"\n[ Final card distributions ]";//Making, if statement for When player won the game
         cout<<"Player 0 ";  for(int i = 0; i< 7; i++){ cout<<"("<<letter[i]<<") "<<people1[i]<<" ";} cout<<"\n"; 
         cout<<"Player 1 ";  for(int i = 0; i< 7; i++){ cout<<"("<<letter[i]<<") "<<people1[i]<<" ";} cout<<"\n";
         cout<<"Player 2 ";  for(int i = 0; i< 7; i++){ cout<<"("<<letter[i]<<") "<<people2[i]<<" ";} cout<<"\n";
         cout<<"Player 3 ";  for(int i = 0; i< 7; i++){ cout<<"("<<letter[i]<<") "<<people3[i]<<" ";} cout<<"\n";
         cout<<"Player 4 "; for(int i = 0; i< 7; i++){ cout<<"("<<letter[i]<<") "<<people4[i]<<" ";} cout<<"\n";
}
int main() {
  srand(time(0));
   int i = 0;
  ship_sails();
return 0;     
}
