#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

map<int, vector<int>> helper(map<int, int> m){
	map<int, vector<int>> new_m;
	for(auto x: m){new_m[x.second].push_back(x.first);}
	for(auto x: new_m){sort(x.second.begin(), x.second.end());}
	return new_m;
}

int main(){
	string N;
	int count=0;
	while(getline(cin, N)){
		if(count){cout << endl;}
		count ++;
		map<int, int> m;
		map<int, vector<int>> new_m;
		for(auto x: N){m[x]++;}
		new_m = helper(m);
		
		for(auto x: new_m){
			for(int i=x.second.size()-1; i>=0; i--){
				cout << x.second[i] << " " << x.first << endl;
			}
		}
	}
	return 0;	
}

