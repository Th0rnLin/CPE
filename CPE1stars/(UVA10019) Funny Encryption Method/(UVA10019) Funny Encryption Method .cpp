#include <iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	while(N--){
		int n, res=0, res2=0;
		cin >> n;
		int tmp=n;
		while(tmp){res+=tmp%2; tmp/=2;}
		tmp=n;
		while(tmp){
			int d=tmp%10;
			tmp/=10;
			while(d){res2+=d%2; d/=2;}
		}
		cout << res << " " << res2 << endl;
	}
	return 0;
}
