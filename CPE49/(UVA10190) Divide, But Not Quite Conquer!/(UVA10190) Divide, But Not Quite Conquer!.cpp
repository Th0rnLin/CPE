#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, m;
	while(cin >> n >> m){
		if(m==1){cout << "Boring!" << endl; continue;}
		vector<int> res={n};
		while(n%m==0){
			n/=m;
			res.push_back(n);
		}
		if(n!=1){cout << "Boring!" << endl;}
		else{
			for(auto x: res){cout << x; if(x!=1){cout << " ";}}
			cout << endl;
		}
	}
	return 0;
}
