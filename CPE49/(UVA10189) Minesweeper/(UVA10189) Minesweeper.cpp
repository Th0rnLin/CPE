#include <iostream>
#include <vector>

using namespace std;

int main(){
	int M, N, counter=0;
	while(cin >> M >> N){
		if(M==0 and N==0){break;}
		vector<vector<char>> v(M, vector<char>(N));
		for(int i=0; i<M; i++){for(int j=0; j<N; j++){cin >> v[i][j];}}
		if(counter>0){cout << endl;}
		cout << "Field #" << ++counter << ":" << endl;
		for(int i=0; i<M; i++){
			for(int j=0; j<N; j++){
				if(v[i][j]=='*'){cout << '*';}
				else{
					int count=0;
					if(i-1>=0 and j-1>=0 and v[i-1][j-1]=='*'){count++;}
					if(i-1>=0 and v[i-1][j]=='*'){count++;}
					if(i-1>=0 and j+1<N and v[i-1][j+1]=='*'){count++;}
					if(j-1>=0 and v[i][j-1]=='*'){count++;}
					if(j+1<N and v[i][j+1]=='*'){count++;}
					if(i+1<M and j-1>=0 and v[i+1][j-1]=='*'){count++;}
					if(i+1<M and v[i+1][j]=='*'){count++;}
					if(i+1<M and j+1<N and v[i+1][j+1]=='*'){count++;}
					cout << count;
				}
			}
			cout << endl;
		}
	}
	
	return 0;
}
