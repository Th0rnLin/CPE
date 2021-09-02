#include <iostream>
#include <vector>

using namespace std;

int main(){
	int M, N, x, y;
	string o;
	cin >> M >> N;
	vector<vector<int>> v(M+1, vector<int>(N+1));
	while(cin >> x >> y >> o){
		string input;
		bool is_loss=false;
		cin >> input;
		for(auto a: input){
			if((y<0||y>N)||(x<0||x>M)){break;}
			if(a=='L'){
				if(o=="N"){o="W";}
				else if(o=="W"){o="S";}
				else if(o=="S"){o="E";}
				else{o="N";}
			}
			else if(a=='R'){
				if(o=="N"){o="E";}
				else if(o=="E"){o="S";}
				else if(o=="S"){o="W";}
				else{o="N";}
			}
			else{
				if(o=="N" and (y+1<=N or v[x][y]==0)){y++;}
				else if(o=="E" and (x+1<=M or v[x][y]==0)){x++;}
				else if(o=="S" and (y-1>0 or v[x][y]==0)){y--;}
				else if(o=="W" and (x-1>0 or v[x][y]==0)){x--;}
			}
		}
		if(x<0){cout << x+1 << " " << y << " " << o << " LOST" << endl; v[x+1][y]=1;}
		else if(y<0){cout << x << " " << y+1 << " " << o << " LOST" << endl; v[x][y+1]=1;}
		else if(x>M){cout << x-1 << " " << y << " " << o << " LOST" << endl; v[x-1][y]=1;}
		else if(y>N){cout << x << " " << y-1 << " " << o << " LOST" << endl; v[x][y-1]=1;}
		else{cout << x << " " << y << " " << o << endl;}
	}
	return 0;
}
