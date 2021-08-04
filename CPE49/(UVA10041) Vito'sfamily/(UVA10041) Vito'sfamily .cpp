#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	int N;
	cin >> N;
	while(N--){
		int r, s, res=0;
		cin >> r;
		vector<int> v(r);
		for(int i=0; i<r; i++){cin >> s; v[i]=s;}
		sort(v.begin(), v.end());
		for(auto x: v){res+=abs(x-v[r/2]);}
		cout << res << endl;
	}
	return 0;
}
