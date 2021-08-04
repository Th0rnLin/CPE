#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	vector<int> v(100);
	int sum=0;
	for(int i=1; i<=100; i++){
		int cur_num=1;
		for(int j=0; j<i; j++){
			cur_num *= i;
			cur_num %= 10;
		}
		sum+=cur_num;
		sum%=10;
		v[i-1]=sum;
	}
	string N;
	while(cin >> N){
		if(N=="0"){break;}
		if(N.size()>5){N = N.substr(N.size()-5, N.size()-1);}
		int n=stoi(N);
		n%=100;
		cout << v[n-1] << endl;
	}
	return 0;
}
