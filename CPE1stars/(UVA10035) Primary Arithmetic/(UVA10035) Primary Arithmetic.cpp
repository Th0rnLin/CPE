#include <iostream>

using namespace std;

int main(){
	int A, B;
	while(cin >> A and cin >> B){
		if(A==0 and B==0){break;}
		int count=0;
		int carry=0;
		while(A or B or carry){
			int a=A%10, b=B%10;
			A/=10;
			B/=10;
			
			carry = (carry+a+b)/10;
			count += carry;
		}
		if(count==0){cout << "No carry operation." << endl;}
		else if(count==1){cout << "1 carry operation." << endl;}
		else{cout << count << " carry operations." << endl;}
	}
	return 0;
}
