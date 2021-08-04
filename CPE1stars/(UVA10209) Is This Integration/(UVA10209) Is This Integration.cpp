/*使用PI=3.14159可能不夠精確，請用2.0*acos(0.0)作為PI的值。*/
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	float a;
	while(cin >> a){
		double PI = 2.0*acos(0.0);
		double z = ( 1 - sqrt( 3.0 ) / 4.0 - PI / 6.0 ) * a * a;
	    double y = ( 1 - PI / 4.0 ) * a * a - 2 * z;
		double x = a * a - 4.0 * ( y + z );
		printf("%.3f %.3f %.3f\n", x, 4*y, 4*z);
	}
	return 0;
}
