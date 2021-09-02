#include <iostream>
#include <vector>

using namespace std;

int main(){
	int N;
	while(cin >> N){
		if(N==0){continue;}
		vector<vector<int>> v(4, vector<int>(3));
		v[0][1]=2; v[1][1]=1; v[2][1]=5; v[3][1]=6; v[1][0]=3; v[1][2]=4;
		while(N--){
			string S;
			cin >> S;
			if(S=="north"){
				int tmp=v[0][1];
				v[0][1]=v[1][1];
				v[1][1]=v[2][1];
				v[2][1]=v[3][1];
				v[3][1]=tmp;
			}
			else if(S=="east"){
				int tmp=v[1][2];
				v[1][2]=v[1][1];
				v[1][1]=v[1][0];
				v[1][0]=v[3][1];
				v[3][1]=tmp;
			}
			else if(S=="south"){
				int tmp=v[3][1];
				v[3][1]=v[2][1];
				v[2][1]=v[1][1];
				v[1][1]=v[0][1];
				v[0][1]=tmp;
			}
			else if(S=="west"){
				int tmp=v[1][0];
				v[1][0]=v[1][1];
				v[1][1]=v[1][2];
				v[1][2]=v[3][1];
				v[3][1]=tmp;
			}
		}
		cout << v[1][1] << endl;
	}
	return 0;
}
