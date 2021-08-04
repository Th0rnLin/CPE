#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	int N;
	while(cin >> N){
		int n;
		vector<int> v(N);
		for(int i=0; i<N; i++){cin >> n; v[i]=n;}
		sort(v.begin(), v.end());
		
		if(N%2){ // odd
			int c=0;
			for(auto x: v){
				if(x==v[(N-1)/2]){c++;}
			}
			cout << v[(N-1)/2] << " " << c << " " << 1 << endl;
		
		}else{ // even
			int c=0;
			for(auto x: v){
				if(x==v[N/2] or x==v[N/2-1]){c++;}
			}
			cout << v[N/2-1] << " " << c << " " << abs(v[N/2]-v[N/2-1])+1 << endl;
		}
	}
	return 0;
}
