#include <iostream>

using namespace std;

int main(){
	string I;
	while(cin >> I){
		int res=0, max_val=1;
		for(auto x: I){
			int tmp=0;
			if(x-'0'>=0 and x-'0'<=9){tmp=x-'0';}
			else if(x-'A'>=0 and x-'A'<26){tmp=x-'A'+10;}
			else if(x-'a'>=0 and x-'a'<26){tmp=x-'a'+36;}
			res+=tmp;
			max_val=max(max_val, tmp);
		}
		for(int i=max_val; i<=62; i++){
			if(res%i==0){cout << i+1 << endl; break;}
			if(i==62){cout << "such number is impossible!" << endl;}
		}
	}
	return 0;
}
