#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main(){
	unordered_map<char, vector<int>> m;
	m['a']={0,1,1,0,0,0,0,0,0,0}; m['A']={1,1,1,0,0,0,0,0,0,0};
	m['b']={0,1,0,0,0,0,0,0,0,0}; m['B']={1,1,0,0,0,0,0,0,0,0};
	m['c']={0,1,1,1,0,0,1,1,1,1}; m['C']={0,0,1,0,0,0,0,0,0,0};
	m['d']={0,1,1,1,0,0,1,1,1,0}; m['D']={1,1,1,1,0,0,1,1,1,0};
	m['e']={0,1,1,1,0,0,1,1,0,0}; m['E']={1,1,1,1,0,0,1,1,0,0};
	m['f']={0,1,1,1,0,0,1,0,0,0}; m['F']={1,1,1,1,0,0,1,0,0,0};
	m['g']={0,1,1,1,0,0,0,0,0,0}; m['G']={1,1,1,1,0,0,0,0,0,0};
	int N;
	cin >> N;
	while(N--){
		string S;
		vector<int> res={0,0,0,0,0,0,0,0,0,0};
		vector<int> pre={0,0,0,0,0,0,0,0,0,0};
		cin >> S;
		for(auto x: S){
			for(int i=0; i<10; i++){
				if(pre[i]==0 and m[x][i]==1){res[i]++;}
			}
			pre=m[x];
		}
		for(int i=0; i<res.size(); i++){
			if(i>0){cout << " ";}
			cout << res[i];
		}
		cout << endl;
	}
	return 0;
}
