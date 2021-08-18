#include <iostream>

using namespace std;

int main(){
	string S;
	while(cin >> S){
		if(S=="0"){break;}
		int s=0, N=0;
		for(auto x: S){s+=x-'0';}
		while(s!=9 and s!=0 and s%9==0){
			N++;
			int sub_s=0;
			while(s>0){sub_s+=s%10; s/=10;}
			s=sub_s;
		}
		if(s==9){N++;}
		if(N==0){cout << S << " is not a multiple of 9." << endl;}
		else{cout << S << " is a multiple of 9 and has 9-degree " << N << "." << endl;}
	}
	return 0;
}
