#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	int S;
	cin >> S;
	while(S--){
		int N, I, r=0;
		float p;
		cin >> N >> p >> I;
		float res=0.0, nowp;
		do{
			nowp = pow((1-p), N*r)*pow(1-p, I-1)*p;
			res += nowp;
			r++;
		}
		while(nowp>0.00000000000000001);
		cout << fixed << setprecision(4) << res << endl;		
	}
}
