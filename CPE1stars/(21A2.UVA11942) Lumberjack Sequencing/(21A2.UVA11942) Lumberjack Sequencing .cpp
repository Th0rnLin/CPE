#include <iostream>
#include <vector>

using namespace std;

int main(){
	int N;
	cin >> N;
	cout << "Lumberjacks:" << endl;
	while(N--){
		int n;
		vector<int> v;
		for(int i=0; i<10; i++){cin >> n; v.push_back(n);}
		bool x=true;
		for(int i=1; i<10; i++){
			if(v[i-1]>=v[i]){x=false; break;}
		}
		if(!x){
			x = true;
			for(int i=1; i<10; i++){
				if(v[i-1]<=v[i]){x=false; break;}
			}
		}
		if(x){cout << "Ordered" << endl;}
		else{cout << "Unordered" << endl;}
		
	}
	return 0;
}
