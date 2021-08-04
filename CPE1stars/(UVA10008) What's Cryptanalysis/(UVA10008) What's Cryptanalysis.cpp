#include <iostream>
#include <map>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

map<int, set<char>> new_m;
int max_val = 0;
void helper(map<char, int>m){
	for(auto x: m){
		new_m[x.second].insert(x.first);
		max_val = max(max_val, x.second);
	}
}

int main(){
	int N;
	map<char, int> m;
	cin >> N;
	string s;
	getline(cin, s);
	while(N--){
		getline(cin, s);
		for(auto x: s){
			if(x-'A'>=0 and x-'A'<26){m[x]++;}
			else if(x-'a'>=0 and x-'a'<26){m[x-'a'+'A']++;}
		}
	}
	helper(m);
	for(int i=max_val; i>=1; i--){
		for(auto y: new_m[i]){
			cout << y << " " << i << endl;
		}
	}
	
	return 0;
}
