#include <iostream>
#include <vector>

using namespace std;

int main(){
	int m, n, C=0;
	while(cin >> m and cin >> n){
		if(m==0 and n==0){break;}
		if(C){cout << endl;}
		cout << "Field #" << ++C << ":" << endl;
		vector<vector<char>> v(m, vector<char>(n));
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				char c;
				cin >> c;
				v[i][j]= c;
			}
		}
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				if(v[i][j]=='.'){
					int count=0;
					if(i-1>=0 and j-1>=0 and v[i-1][j-1]=='*'){count++;}
					if(i-1>=0 and v[i-1][j]=='*'){count++;}
					if(i-1>=0 and j+1<n and v[i-1][j+1]=='*'){count++;}
					if(j-1>=0 and v[i][j-1]=='*'){count++;}
					if(j+1<n and v[i][j+1]=='*'){count++;}
					if(i+1<m and j-1>=0 and v[i+1][j-1]=='*'){count++;}
					if(i+1<m and v[i+1][j]=='*'){count++;}
					if(i+1<m and j+1<n and v[i+1][j+1]=='*'){count++;}
					v[i][j]=count+'0';
				}
			}
		}
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				cout << v[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}
