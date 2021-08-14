#include <iostream>
#include <vector>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int N, P, res=0;
		cin >> N >> P;
		vector<bool> v(N+1);
		vector<int> h(P);
		
		for(int i=0; i<P; i++){cin >> h[i];}
		
		for(int i=1; i<v.size(); i++){
			for(auto x: h){
				if(i%x==0){v[i]=true;}
			}
		}
		
		for(int i=1; i<v.size(); i++){
			if(v[i] and !(i%7==0 or i%7==6)){res++;}
		}
		
		cout << res << endl;
	}
	return 0;
}
