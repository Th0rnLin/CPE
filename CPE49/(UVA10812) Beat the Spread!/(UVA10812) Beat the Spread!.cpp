#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int a, b;
		cin >> a >> b;
		if(a<b or (a+b)%2==1){cout << "impossible" << endl; continue;}
		else{cout << (a+b)/2 << " " << (a-b)/2 << endl;}
	}
	return 0;
}
