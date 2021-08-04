#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool is_only(int a, int b){
	vector<int> v(10);
	string A=to_string(a), B=to_string(b);
	for(auto x: A){v[x-'0']++;}
	for(auto x: B){v[x-'0']++;}
	for(int i=1; i<v.size(); i++){
		if(v[i]!=1){return false;}
	}
	return true;
}

int main(){
	int N;
	bool t=false;
	while(cin >> N){
		if(N==0){break;}
		bool have_cout = false;
		if(t){cout << endl;}
		t=true;
		for(int i=01234; i<=98765; i++){
			bool x=false;
			int A, B;
			if(i%N==0){x=is_only(i, i/N); A=i; B=i/N;}
			if(x){
				have_cout = true;
				if(B/10000){cout << i << " / " << i/N << " = " << N << endl;}
				else{cout << i << " / 0" << i/N << " = " << N << endl;}
			}
		}
		if(not have_cout){cout <<"There are no solutions for " << N << "." << endl;}
		
	}
	return 0;
}
