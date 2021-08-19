#include <iostream>

using namespace std;

int main(){
	int N;
	while(cin >> N){
		if(N==0){break;}
		
		int G=0;
		for(int i=1; i<N; i++){
			for(int j=i+1; j<=N; j++){
				int a=i, b=j;
				if(b) while((a %= b) and (b %= a));
				G+=a+b;
			}
		}
		cout << G << endl;
	}
	return 0;
}
