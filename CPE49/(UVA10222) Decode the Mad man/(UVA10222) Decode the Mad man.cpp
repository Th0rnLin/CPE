#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	string decode = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"; // "\a" -> "\\a"
	while(getline(cin, s)){
		for(auto x: s){
			bool is_decode=false;
			if(x-'A'>=0 and x-'A'<26){x=x-'A'+'a';}
			for(int i=0; i<decode.size(); i++){
				if(i-2>=0 and x==decode[i]){cout << decode[i-2]; is_decode=true;}
			}
			if(not is_decode){cout << x;}
		}
		cout << endl;
	}
}
