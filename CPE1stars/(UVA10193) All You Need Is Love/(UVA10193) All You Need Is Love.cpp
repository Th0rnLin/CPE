#include <iostream>

using namespace std;

int main(){
	int N, counter=0;
	cin >> N;
	while(N--){
		string A, B;
		cin >> A >> B;
		int a=0, b=0;
		for(auto x: A){a = a*2+x-'0';}
		for(auto x: B){b = b*2+x-'0';}
		bool is_love=false;
		for(int i=2; i<=b; i++){
			if(a%i==0 and b%i==0){is_love=true; break;}
		}
		cout << "Pair #" << ++counter << ": ";
		if(is_love){cout << "All you need is love!" << endl;}
		else{cout << "Love is not all you need!" << endl;}
	}
	return 0;
}
