#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	float L, W;
	while(cin >> L and cin >> W){
		float a=12.0, b=-(4.0*L+4.0*W), c=W*L;
		float res=(-b-sqrt(b*b-4*a*c))/(2*a);
		float res2 = min(L, W)/2;
		printf("%.3f 0.000 %.3f\n", res, res2);
	}
	return 0;
}
