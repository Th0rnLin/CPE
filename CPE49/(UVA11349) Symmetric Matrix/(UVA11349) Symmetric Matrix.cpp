#include <iostream>
#include <vector>

using namespace std;

int main(){
	int T, counter=1;
	cin >> T;
	while(T--){
		string tmp;
		long long int n, num;
		bool is_sym=true;
		cin >> tmp >> tmp >> n;
		vector<int> v(n*n, 0);
		for(int i=0; i<v.size(); i++){
			cin >> num;
			v[i]=num;
			if(num<0){is_sym=false;}
		}
		if(is_sym){
			for(int i=0; i<(v.size()/2); i++){
				if(v[i]!=v[v.size()-1-i]){is_sym=false; break;}
			}
		}
		cout << "Test #" << counter++ << ": ";
		if(is_sym){cout << "Symmetric." << endl;}
		else{cout << "Non-symmetric." << endl;}
	}
	return 0;
}
