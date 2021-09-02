#include <iostream>
#include <iomanip>
#include <map>
#include <string>

using namespace std;

int main(){
	int N;
	string tmp;
	cin >> N;
	getline(cin, tmp);
	getline(cin, tmp);
	while(N--){
		int total=0;
		string s;
		map<string, double> m;
		
		while(getline(cin, s) and s!=""){
			m[s]+=1;
			total+=1;
		}
		
		for(auto x: m){
			cout << fixed << setprecision(4);
			cout << x.first << " " << (x.second/total)*100 << endl;
		}
		if(N!=0){cout << endl;}
	}
	return 0;
}
