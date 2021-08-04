#include <iostream>

using namespace std;

int main(){
	int a, b;
	while(cin >> a >> b){
		if(a==0 and b==0){break;}
		int carry=0, res=0;
		while(a or b or carry){
			carry = (a%10 + b%10 + carry)/10;
			a/=10; b/=10;
			if(carry){res++;}
		}
		if(res==1){cout << "1 carry operation." << endl;}
		else if(res){cout << res << " carry operations." << endl;}
		else{cout << "No carry operation." << endl;}
	}
	return 0;
}
