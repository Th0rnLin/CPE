#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	string s;
	int max_len=0;
	vector<string> v;
	while(getline(cin, s)){
		v.push_back(s);
		if(s.size()>max_len){max_len=s.size();}
	}

	for(int i=0; i<max_len; i++){
		int gap=0; // -> the output will align to right. if rightmost character is space then that will bypass and change to left character of its.
		for(int j=v.size()-1; j>=0; j--){
			if(i>=v[j].size()){
				gap++;
			}else{
				while(gap>0){
					cout << " ";
					gap--;
				}
				cout << v[j][i];
			}
		}
		cout << endl;
	}
	
	return 0;
}
