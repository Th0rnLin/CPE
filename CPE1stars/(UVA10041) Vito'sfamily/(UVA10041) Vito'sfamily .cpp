#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int N;
	cin >> N;
	while(N--){
		int n, x, res=0, mid;
		cin >> n;
		vector<int> v(n, 0);
		for(int i=0; i<n; i++){
			cin >> x;
			v[i] = x;
		}
		sort(v.begin(), v.end());
		mid = v[n/2];
		for(auto x: v){
			res += abs(mid-x);
		}
		cout << res << endl;
	}
	return 0;
}
