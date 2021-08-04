#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int kuti=10000000, lakh=100000, hajar=1000, shata=100;

void helper(long long int n){
	if(n>=kuti){
		helper(n/kuti);
		cout << " kuti";
		n%=kuti;
	}
	if(n>=lakh){
		helper(n/lakh);
		cout << " lakh";
		n%=lakh;
	}
	if(n>=hajar){
		helper(n/hajar);
		cout << " hajar";
		n%=hajar;
	}
	if(n>=shata){
		helper(n/shata);
		cout << " shata";
		n%=shata;
	}
	if(n){cout << " " << n;}
}

int main(){
	long long int n;
	int count=0;
	while(cin >> n){
		count ++;
		cout << setw(4) << count << ".";
		if(n){helper(n);}
		else{cout << " 0";}
		cout << endl;
	}
	return 0;
}
