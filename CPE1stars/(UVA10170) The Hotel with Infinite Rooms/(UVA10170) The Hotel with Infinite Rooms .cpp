#include <iostream>

using namespace std;

int main(){
	long long int S, N;
	while(cin >> S and cin >> N){
		long long int res = S;
		while(S<N){
			res++;
			S+=res;
		}
		cout << res << endl;
	}
	return 0;
}
