#include <iostream>
#include <vector>

using namespace std;

int main(){
	int N, now_max=2;
	vector<int> fib={1, 2};
	cin >> N;
	while(N--){
		int n, resn;
		string res="";
		cin >> n;
		resn=n;
		
		while(now_max<n){
			now_max=fib[fib.size()-1]+fib[fib.size()-2];
			fib.push_back(now_max);
		}
		
		int i=fib.size()-1;
		while(fib[i]>n){i--;}
		for(i; i>=0; i--){
			if(n>=fib[i]){res+="1"; n-=fib[i];}
			else{res+="0";}
		}
		cout << resn << " = " << res << " (fib)" << endl;
	}
	return 0;
}
