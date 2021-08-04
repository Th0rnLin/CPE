#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	int counter=0;
	while(getline(cin, s)){
		
		for(auto x: s){
			if(x=='"'){
				if(counter%2){cout << "''";}
				else{cout << "``";}
				counter++;
			}
			else{cout << x;}
		}
		cout << endl;
	}
}
