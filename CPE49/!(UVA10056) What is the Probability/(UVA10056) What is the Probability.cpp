#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	int S;
	cin >> S;
	while(S--){
		int N, n, R=0;
		float p, res=0.0, nowp=0.0;
		cin >> N >> p >> n;
		do{
			nowp=pow((1-p), R*N)*pow((1-p), n-1)*p;
			res+=nowp;
			R++;
		}while(nowp>0.000001);
		cout << fixed << setprecision(4) << res << endl; // it's important
	}
	return 0;
}
