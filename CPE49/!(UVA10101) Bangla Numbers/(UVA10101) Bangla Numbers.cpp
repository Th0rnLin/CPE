#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

void solve(long long int n){
	if(n/10000000){
		solve(n/10000000);
		cout << " kuti";
		n%=10000000;
	}
	
	if(n/100000){
		solve(n/100000);
		cout << " lakh";
		n%=100000;
	}
	
	if(n/1000){
		solve(n/1000);
		cout << " hajar";
		n%=1000;
	}
	
	if(n/100){
		solve(n/100);
		cout << " shata";
		n%=100;
	}
	if(n){cout << " " << n;}
}

int main(){
	long long int n;
	int counter=1;
	while(cin >> n){
		cout << fixed << setw(4) << counter++ << "."; // -> printf("%*d.", 4, counter++);
		if(n){solve(n);}
		else{cout << " 0";}
		cout << endl;
	}
	return 0;
}
