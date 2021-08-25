#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.second!=b.second){return a.second<b.second;}
	else{return a.first>b.first;}
}

int main(){
	string s;
	int counter=0;
	while(getline(cin, s)){
		map<int, int> m;
		vector<pair<int, int>> v;
		for(auto x: s){
			/*if(x-'A'>=0 and x-'A'<26){m[x]++;}
			else if(x-'a'>=0 and x-'a'<26){m[x]++;}
			else if(x-'0'>=0 and x-'0'<10){m[x]++;}
			else if(x==' '){m[x]++;}*/
			m[x]++;
		}
		for(auto x: m){
			v.push_back({x.first, x.second});
		}
		sort(v.begin(), v.end(), cmp);
		if(counter++){cout << endl;}
		for(auto x: v){
			cout << x.first << " " << x.second << endl;
		}
	}
	return 0;
}
