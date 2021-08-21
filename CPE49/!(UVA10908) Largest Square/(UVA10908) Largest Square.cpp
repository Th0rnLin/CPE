#include <iostream>
#include <vector>

using namespace std;

int M, N;

int helper(char C, int x, int y, int r, vector<vector<char>> v){
	int top=x-r;
	int bottom=x+r;
	int left=y-r;
	int right=y+r;
	if(top<0 or bottom>=M or left<0 or right>=N){return 0;}
	for(int i=top; i<=bottom; i++){
		for(int j=left; j<=right; j++){
			if(v[i][j]!=C){return 0;}
		}
	}
	return 1;
}

int main(){
	int T;
	cin >> T;
	while(T--){
		int Q;
		cin >> M >> N >> Q;
		vector<vector<char>> v(M, vector<char>(N));
		for(int i=0; i<M; i++){for(int j=0; j<N; j++){cin >> v[i][j];}}
		cout << M << " " << N << " " << Q << endl;
		while(Q--){
			int r, c,res=0;
			cin >> c >> r;
			char C=v[c][r];
			while(helper(C, c, r, res, v)==1){res++;}
			cout << res*2-1 << endl;
		}
	}
	return 0;
}
