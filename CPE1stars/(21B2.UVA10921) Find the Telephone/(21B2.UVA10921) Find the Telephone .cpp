#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	vector<int> v={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
	string s;
	while(cin >> s){
		int letter=0, hyphen=0;
		string res="";
		for(int i=0; i<s.length(); i++){
			int sub_s = s[i]-'A';
			if(sub_s>=0 and sub_s<=26){letter++; res+=to_string(v[sub_s]);}
			else if(s[i]=='-'){hyphen++; res+="-";}
			else{res+=s[i];}
		}
		cout << res << " " << letter << " " << hyphen << endl;
	}
	return 0;
}
