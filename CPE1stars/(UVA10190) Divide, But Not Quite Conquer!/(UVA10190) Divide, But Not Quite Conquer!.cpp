#include <iostream>
#include <vector>

using namespace std;

int main(){
	long long int A, B;
	while(cin >> A and cin >> B){
		if(B==1){cout << "Boring!" << endl; continue;}
		vector<int> v={A};
		while(A%B==0){
			v.push_back(A/B);
			A/=B;
		}
		if(A==1){
			for(int i=0; i<v.size(); i++){
				if(i){cout << " ";}
				cout << v[i];
			}
		}else{cout << "Boring!";}
		cout << endl;
	}
	return 0;
}
