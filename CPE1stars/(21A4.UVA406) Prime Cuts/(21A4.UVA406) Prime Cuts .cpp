#include <iostream>
#include <vector>

using namespace std;

int main(){
	int N, C;
	while(cin >> N and cin >> C){
		vector<int> v={1};
		for(int i=2; i<=N; i++){
			bool is_prime=true;
			for(int j=2; j<i; j++){
				if(i%j==0){is_prime=false;}
			}
			if(is_prime){v.push_back(i);}
		}
		cout << N << " " << C << ":";
		int mid=v.size()/2;
		if(v.size()%2){ // odd
			int start = mid-C+1;
			if(start+2*C > v.size()){
				for(auto x: v){
					cout << " " << x;
				}
			}else{
				for(int i=start; i<start+C*2-1; i++){
					cout << " " << v[i];
				}
			}
		}else{ // even
			int start = mid-C;
			if(start+2*C > v.size()){
				for(auto x: v){
					cout << " " << x;
				}
			}else{
				for(int i=start; i<start+C*2; i++){
					cout << " " << v[i];
				}
			}
		}
		cout << endl << endl;
	}
	return 0;
}
