#include <iostream>

using namespace std;

int solve(int n){
	int res=0;
	while(n){
		res+=n%10;
		n/=10;
	}
	return res;
}

int main(){
	int n;
	while(cin >> n){
		if(n==0){break;}
		while(n>=10){ // -> or use "n/10"
			n=solve(n);
		}
		cout << n << endl;
	}
	return 0;
}
