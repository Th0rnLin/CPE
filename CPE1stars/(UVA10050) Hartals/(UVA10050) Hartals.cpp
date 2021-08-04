#include <iostream>
#include <vector>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int N, P, h, res=0; // N-> 有多少天 P-> 多少筆放假資料 h-> 放假頻率
		cin >> N;
		cin >> P;
		vector<int> v(P, 0);
		vector<bool> res_v(N, false);
		for(int i=0; i<P; i++){cin >> h; v[i]=h;}
		
		for(int i=0; i<N; i++){
			for(auto x: v){
				if((i+1)%x==0 and !((i+1)%7==6 or (i+1)%7==0)){res_v[i]=true;}
			}
		}
		for(auto x: res_v){
			res += x;
		}
		cout << res << endl;		
	}
	return 0;
}
