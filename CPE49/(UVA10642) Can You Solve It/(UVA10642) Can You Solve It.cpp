#include <iostream>

using namespace std;

int main(){
	int N, counter=1;
	cin >> N;
	while(N--){
		int bx, by, ex, ey, bsum=0, esum=0;
		cin >> bx >> by >> ex >> ey;
		for(int i=0; i<=bx+by; i++){bsum+=i+1;}
		for(int i=0; i<=ex+ey; i++){esum+=i+1;}
		
		bsum-=by+1;
		esum-=ey+1;
		cout << "Case " << counter++ << ": ";
		cout << esum-bsum << endl;
	}
	return 0;
}
