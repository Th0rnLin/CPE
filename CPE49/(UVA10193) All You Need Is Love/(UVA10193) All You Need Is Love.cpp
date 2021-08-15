#include <iostream>

using namespace std;

int main(){
	int N, counter=1;
	cin >> N;
	while(N--){
		cout << "Pair #" << counter++ << ": ";
		string S1, S2;
		int s1=0, s2=0, tmp;
		cin >> S1 >> S2;
		
		for(auto x: S1){
			s1=s1*2+x-'0';
		}
		for(auto x: S2){
			s2=s2*2+x-'0';
		}
		
		while(s1>1){
			if(s1<s2){tmp=s1; s1=s2; s2=tmp;}
			s1=s1%s2;
		}
		if(s1==0){cout << "All you need is love!" << endl;}
		else{cout << "Love is not all you need!" <<endl;}
	}
	return 0;
}
