#include <iostream>
#include <vector>

using namespace std;

int main(){
	int N, counter=1;
	while(cin >> N){
		vector<int> v(N, 0);
		bool is_B2=true;
		for(int i=0; i<N; i++){cin >> v[i];}
		for(int i=v.size()-1; i>0; i--){
			if(v[i]%v[i-1]!=0){is_B2=false; break;}
		}
		cout << "Case #" << counter++ << ": ";
		if(is_B2){cout << "It is a B2-Sequence." << endl << endl;}
		else{cout << "It is not a B2-Sequence."<< endl << endl;}
	}
	return 0;
}
