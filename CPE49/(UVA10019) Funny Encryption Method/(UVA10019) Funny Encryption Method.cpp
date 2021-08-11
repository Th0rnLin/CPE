#include <iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	while(N--){
		int M, b1=0, b2=0, tmp;
		cin >> M;
		tmp=M;
		while(tmp){
			b1+=tmp%2;
			tmp/=2;
		}
		while(M){
			tmp=M%10;
			M/=10;
			while(tmp){
				b2+=tmp%2;
				tmp/=2;
			}
		}
		cout << b1 << " " << b2 << endl;
	}
	return 0;
}
