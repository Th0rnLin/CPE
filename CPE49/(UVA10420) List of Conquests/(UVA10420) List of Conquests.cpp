#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
	int n;
	string s;
	map<string, int> m;
	cin >> n;
	getline(cin, s);
	while(n--){
		getline(cin, s);
		string title_s;
		for(int i=0; i<s.size(); i++){if(s[i]==' '){break;}title_s+=s[i];}
		m[title_s]++;
	}
	for(auto x: m){
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}
