#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	int N;
	while(cin >> N){
		int n;
		bool is_jolly=true;
		vector<int> v(N);
		for(int i=0; i<N; i++){cin >> n; v[i]=n;}
		for(int i=0; i<v.size()-1; i++){v[i]=abs(v[i]-v[i+1]);}
		sort(v.begin(), v.end());
		for(int i=0; i<v.size()-1; i++){if(v[i]!=i+1){is_jolly=false; break;}}
		if(is_jolly){cout << "Jolly" << endl;}
		else{cout << "Not jolly" << endl;}
	}
	return 0;
}
