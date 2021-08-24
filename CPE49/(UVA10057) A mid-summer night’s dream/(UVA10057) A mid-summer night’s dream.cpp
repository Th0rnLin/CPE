#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int N;
	while(cin >> N){
		vector<int> v(N);
		for(int i=0; i<N; i++){cin >> v[i];}
		sort(v.begin(), v.end());
		int res1, res2=0, res3;
		if(N%2==1){ // 计
			res1=v[v.size()/2]; // い计
			for(auto x: v){if(x==v[v.size()/2]){res2++;}} // Τぶ计籔い计
			res3=1; // い计畉+1
		}
		else{ // 案计
			res1=v[v.size()/2-1]; // い计(ㄢ计い耕)
			for(auto x: v){if(x==v[v.size()/2-1] or x==v[v.size()/2]){res2++;}} // Τぶ计籔い计
			res3=v[v.size()/2]-v[v.size()/2-1]+1; // い计畉+1
		}
		cout << res1 << " " << res2 << " " << res3 << endl;
	}
	return 0;
}
