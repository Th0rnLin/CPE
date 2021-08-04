#include <iostream>

using namespace std;

int main(){
	int a, b;
	while(cin >> a >> b){
		bool swap=false;
		int res=0;
		if(a>b){int tmp=a; a=b; b=tmp; swap=true;}
		for(int i=a; i<=b; i++){
			int n=i, cur_res=0;
			while(n!=1){
				if(n%2){n=3*n+1;}
				else{n/=2;}
				cur_res++;
			}
			res = max(res, cur_res);
		}
		if(swap){cout << b << " " << a << " " << res+1 << endl;}
		else{cout << a << " " << b << " " << res+1 << endl;}
	}
}
