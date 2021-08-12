#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int I;
	while(cin >> I){
		if(I==0){break;}
		int P=0;
		string B="";
		while(I){
			if(I%2==1){B+="1"; P++;}
			else{B+="0";}
			I/=2;
		}
		reverse(B.begin(), B.end());
		cout << "The parity of " << B << " is " << P << " (mod 2)." << endl;
	}
	return 0;
}
