#include <iostream>

using namespace std;

int main(){
	long long int a, b;
	while(cin >> a and cin >> b){
		long long int res=a;
		while(a<b){res++; a+=res;}
		cout << res << endl;
	}
	return 0;
}
