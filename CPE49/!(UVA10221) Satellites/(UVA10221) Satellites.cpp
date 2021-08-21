#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	double s, a, r=6440.0, pi=3.14159265358979323846;
	string aa;
	while(cin >> s >> a >> aa){
		if(aa=="min"){a/=60;}
		while(a>360){a-=360;}
		while(a>180){a=360-a;}
		cout << fixed << setprecision(6); // -> important
		cout << (s+r)*pi*a/180 << " "; // -> important
		cout << (s+r)*sin(a/2*pi/180)*2 << endl; // -> important
	}
	return 0;
}
