#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int B, E;
	while(cin >> B and cin >> E){
		bool changed=false;
		if(E<B){
			int tmp=E;
			E=B;
			B=tmp;
			changed=true;
		}
		int max_t=0;
		for(int i=B; i<=E; i++){
			int cur_t=0, num=i;
			while(num!=1){
				if(num%2){
					num=num*3+1;
				}else{
					num/=2;
				}
				cur_t++;
			}
			max_t = max(max_t, cur_t);
		}
		if(changed){cout << E << " " << B << " " << max_t+1 << endl;}
		else{cout << B << " " << E << " " << max_t+1 << endl;}
		
	}
	return 0;
}
