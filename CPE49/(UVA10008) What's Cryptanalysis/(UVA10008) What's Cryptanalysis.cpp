/*input only use "cin"*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b){
	if(a.second!=b.second){return a.second>b.second;}
	return b.first>a.first;
}

int main(){
	char c;
	vector<char> v(26);
	while(cin >> c){
		if(c-'A'>=0 and c-'A'<26){v[c-'A']++;}
		if(c-'a'>=0 and c-'a'<26){v[c-'a']++;}
	}
	vector<pair<char, int>> res;
	for(int i=0; i<v.size(); i++){
		if(v[i]){res.push_back({i+'A', v[i]});}
	}
	sort(res.begin(), res.end(), cmp);
	for(auto x: res){
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}

/*input use "cin" and "getline". it should clear buffer if "cin" convert to "getline"*/
/*
cin >> a; 				-> cout << *a;
getline(cin, stmp); 	-> cout << NULL(buffer);
getline(cin, s); 		-> cout << *s;
*/
/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b){
	if(a.second!=b.second){return a.second>b.second;}
	return b.first>a.first;
}

int main(){
	int n;
	string stmp;
	cin >> n;
	getline(cin, stmp);
	map<char, int> m;
	while(n--){
		string s;
		getline(cin, s);
		for(auto x: s){
			if(x-'A'>=0 and x-'A'<26){m[x]++;}
			else if(x-'a'>=0 and x-'a'<26){m[x-'a'+'A']++;}
		}
	}
	vector<pair<char, int>> res;
	for(auto x: m){
		res.push_back({x.first, x.second});
	}
	sort(res.begin(), res.end(), cmp);
	for(auto x: res){
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}
*/
