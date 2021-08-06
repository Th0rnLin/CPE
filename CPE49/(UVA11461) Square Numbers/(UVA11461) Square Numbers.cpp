#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a, b;
	while(cin >> a >> b){
		if(a==0 and b==0){break;}
		// use some special algorithm;
		int A=sqrt(a), B=sqrt(b), res=0;
		if(B<a){cout << 0 << endl;}
		else{
			if(A*A==a){res++;}
			res+=(B-A);
			cout << res << endl;
		}
	}
	return 0;
}
