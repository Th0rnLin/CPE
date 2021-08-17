#include <iostream>

using namespace std;

int main(){
	int N;
	while(cin >> N){
		bool is_prime=true;
		for(int i=2; i*i<=N; i++){
			if(N%i==0){is_prime=false; break;}
		}
		if(is_prime==true){
			bool is_emirp=true;
			int NN=0, tmp=N;
			while(tmp>0){NN=NN*10+tmp%10; tmp/=10;}
			for(int i=2; i*i<=NN; i++){if(NN%i==0){is_emirp=false; break;}}
			if(NN==N){is_emirp=false;}
			if(is_emirp){cout << N << " is emirp." << endl;}
			else{cout << N << " is prime." << endl;}
		}
		else{cout << N << " is not prime." << endl;}
	}
	return 0;
}
