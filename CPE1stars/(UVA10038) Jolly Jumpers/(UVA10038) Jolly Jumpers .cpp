#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int N;
	while(cin >> N){
		int n;
		bool is_jolly=true;
		vector<int> v(N, 0);
		vector<int> vv(N, 0);
		for(int i=0; i<N; i++){
			cin >> n;
			v[i]=n;
		}
		for(int i=1; i<v.size(); i++){
			int dif = abs(v[i]-v[i-1]);
			if(dif>N-1 or dif==0){is_jolly=false; break;}
			vv[dif]++;
			if(vv[dif]>1){is_jolly=false; break;}
		}
		if(is_jolly){cout << "Jolly" << endl;}
		else{cout << "Not jolly" << endl;}
	}	
	return 0;
}
