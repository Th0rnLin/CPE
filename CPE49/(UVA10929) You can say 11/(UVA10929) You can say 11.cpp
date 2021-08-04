#include <iostream>

using namespace std;

int main(){
	string s;
	while(cin >> s){
		if(s=="0"){break;}
		int x=0;
		for(int i=0; i<s.size(); i++){
			if(i%2){x+=s[i]-'0';}
			else{x-=s[i]-'0';}
		}
		if(x%11==0){cout << s << " is a multiple of 11." << endl;} // if S is multiple of 11 is that remainder also is multiple of 11;
		else{cout << s << " is not a multiple of 11." << endl;}
	}
}
