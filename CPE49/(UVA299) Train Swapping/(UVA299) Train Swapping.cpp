#include <iostream>
#include <vector>

using namespace std;

int main(){
	int N;
	cin >> N;
	while(N--){
		int L, counter=0;
		cin >> L;
		vector<int> v(L);
		for(int i=0; i<L; i++){cin >> v[i];}
		for(int i=0; i<v.size(); i++){
			for(int j=i+1; j<v.size(); j++){
				if(v[i]>v[j]){int tmp=v[i]; v[i]=v[j]; v[j]=tmp; counter++;}
			}
		}
		cout << "Optimal train swapping takes "<< counter << " swaps." << endl;
	}
	return 0;
}
