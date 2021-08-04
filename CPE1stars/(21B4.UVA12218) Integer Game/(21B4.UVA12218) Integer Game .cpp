#include <iostream>
#include <vector>

using namespace std;

int main(){
	int N, count=1;
	cin >> N;
	while(N--){
		string n;
		cin >> n;
		vector<int> v;
		int sum=0;
		for(auto x: n){v.push_back(x-'0'); sum+=x-'0';}
		
		int c=0;
		bool can_do=true;
		
		while(can_do){
			can_do=false;
			for(int i=0; i<v.size(); i++){
				if((sum-v[i])%3==0){
					sum -= v[i];
					v.erase(v.begin()+i);
					c++;
					break;
				}
			}
			for(auto x: v){
				if(x%3==0){can_do=true; break;}
			}
		}
		
		
		
		cout << "Case " << count++ << ": ";
		if(c%2){cout << "S" << endl;}
		else{cout << "T" << endl;}
	}
}
