#include <iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	while(N--){
		int e, f, c;
		cin >> e >> f >> c;
		int res=0, empty_bottles=e+f;
		while(empty_bottles/c){
			res += empty_bottles/c;
			empty_bottles = empty_bottles%c + empty_bottles/c;
		}
		cout << res << endl;
	}
	return 0;
}
