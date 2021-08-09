#include <iostream>

using namespace std;

int main(){
	string R;
	while(cin >> R){
		if(R=="0"){cout << 2 << endl; continue;}
		int sum=0, max_digit=0;
		bool is_impossible=true;
		for(auto x: R){
			if(x-'0'>=0 and x-'0'<10){sum+=x-'0'; max_digit=max(max_digit, x-'0');}
			if(x-'A'>=0 and x-'A'<26){sum+=x-'A'+10; max_digit=max(max_digit, x-'A'+10);}
			if(x-'a'>=0 and x-'a'<26){sum+=x-'a'+36; max_digit=max(max_digit, x-'a'+36);}
		}
		for(int i=max_digit+1; i<=62; i++){
			if(sum%(i-1)==0){cout << i << endl; is_impossible=false; break;}
		}
		if(is_impossible){cout << "such number is impossible!" << endl;}
	}
	return 0;
}
