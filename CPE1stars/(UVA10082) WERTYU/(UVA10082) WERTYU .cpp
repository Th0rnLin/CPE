#include <iostream>
#include <vector>
#include <string>

using namespace std;

string s="`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
int main(){
	string S;
	while(getline(cin, S)){
		for(auto x: S){
			if(x==' '){cout << x; continue;}
			for(int i=0; i<s.size(); i++){
				if(x==s[i]){cout << s[i-1]; break;}
			}
		}
		cout << endl;
	}
}
