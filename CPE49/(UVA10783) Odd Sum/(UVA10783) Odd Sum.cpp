#include <iostream>

using namespace std;

int main(){
	int T, counter=1;
	cin >> T;
	while(T--){
		int a, b, res=0;
		cin >> a >> b;
		for(int i=a; i<=b; i++){
			if(i%2==1){res+=i;} // using "i%2==1" is batter than "i%2"; using "i%2" is so many error;
		}
		cout << "Case " << counter++ << ": " << res << endl;
	}
	return 0;
}
