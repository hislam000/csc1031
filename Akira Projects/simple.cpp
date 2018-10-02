#include <iostream>
#include <vector>
#include <string>
using namespace std;

void adding_NeW_paragraph(vector<string> & box){ //Need to call to print the sentence into the box.
	while(true){
		vector<string>hack;
		int w1; int start; int useds; useds =0; start =0; //w1 is another way call width
					cout<<">"<<" Enter the width of text: "; cin >> w1;
if(w1 ==0){ break;
} for(int x=0; x<w1; x++){ //Print from in begin.
		if (x == 0) cout<<"|"; cout<<"-";
		if (x == w1 -1)  cout<<"|"<< endl;
}
	for(int x=0, top= box.size(); x<top; x++){ //Check the all the all the useds.
 int mac; int window;
useds += box[x].length(); mac = x-start; window= useds +mac;
		if(w1 -window >=0){ //Its going to check the all the space from in the sentences and going push_back into the hack.
			hack.push_back(box[x]);
		if(x == top-1){ window =w1-useds;
				while(window>0){
	for(int varible=0, xtop = hack.size(); varible<xtop; varible++){
		if(window ==0){ break;
}
		hack[varible] += " "; window -= 1;
}
}for(int varible=0, target = hack.size(); varible< target; varible++){ //Its just going to print the hack.
			if(varible==0) cout <<"|"; cout<<hack[varible];
					if(varible==target-1) cout <<"|"<< endl;
}
	//hack.clear(); start =x; useds =0; //
}
}if(w1 -window  < 0){
			window =w1 -(useds-box[x].length());
			while(window>0){
				for(int varible=0, xtop =hack.size(); varible<xtop; varible++){
		if(window ==0 || varible==xtop -1){ break;
}
	hack[varible] += " "; window -=1;
}
}for(int varible=0, target = hack.size(); varible <target; varible++){ //Its just going to print the hack
			if(varible ==0) cout<<"|"; cout<<hack[varible];
			if(varible==target-1) cout<<"|"<<endl;
}
	hack.clear(); start =x; useds=0; x -=1; //Line 32 and line 46 is same thing. but from 46 its going to print the paragraph and going to check the by space of sentence.
}
}for(int x=0; x<w1; x++){ //All the print from end.
			if(x==0) cout<<"|"; cout<<"-"; //Just to cout of it.
			if(x==w1-1) cout<<"|"<<endl; ////Just to cout of it.
}
}
} int main(){
		string libaray; string used; vector<string>project;
				cout<<"Enter test, empty return will quit the input"<<endl<<"> ";
	while(getline(cin,libaray)){ //Include in the top of string
		if(libaray ==""){ break;
} cout<<"> ";
	for(int x=0, top= libaray.length(); x<top; x++){
			if (libaray[x] != ' ' && libaray[x] != '\t') {
				used += libaray[x];
}
	if((x != 0 && libaray[x] == ' ' && libaray[x-1] !=' ') || x==top-1){
		project.push_back(used); used.clear();
}
}
} adding_NeW_paragraph(project); //Called into the top
	return 0;
}
//Extra //I was trying to put verything into int main(){ function but when i was puting the int main(){ it's not giving the paragraph by into the box its just giving the half of the line of the box.
