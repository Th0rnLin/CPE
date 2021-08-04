#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int R, N; // R-> ½d³ò, N-> ªø«×
	while(cin >> R and cin >> N){
		vector<int> v;
		int n;
		for(int i=0; i<N; i++){cin >> n; v.push_back(n);}
		bool x=true;
		for(int i=1; i<=R; i++){
			if(!(find(v.begin(), v.end(), i)!=v.end())){
				cout << i << " ";
				x=false;
			}
		}
		if(x){cout << "*";}
		cout << endl;
	}
	return 0;
}
