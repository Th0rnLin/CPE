#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(){
	int x;
	while(cin >> x){
		string s, sub_s="";
		vector<int> v;
		int res=0;
		getline(cin, s); // to clear "\n";
		getline(cin, s); // use getline() to get functional parameters;
		for(int i=0; i<s.size(); i++){
			if(s[i]==' '){v.push_back(stoi(sub_s)); sub_s="";}
			else{sub_s+=s[i];}
		}v.push_back(stoi(sub_s));
		for(int i=0; i<v.size(); i++){v[i]*=(v.size()-i-1);}
		for(int i=0; i<v.size()-1; i++){res+=v[i]*pow(x, (v.size()-i-2));}
		cout << res << endl;
	}
	return 0;
}
