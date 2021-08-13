#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int X, counter=1;
	cin >> X;
	while(X--){
		if(counter!=1){cout << endl;}
		cout << "Case " << counter++ << ":" << endl;
		int N;
		vector<int> cost(36, 0);
		for(int i=0; i<cost.size(); i++){cin >> cost[i];}
		cin >> N;
		while(N--){
			int Y, min_val=2000000001;
			vector<int> ans(37, 0);
			cin >> Y;
			for(int i=2; i<=36; i++){
				int sum=0, YY=Y;
				while(YY>0){
					sum+=cost[YY%i];
					YY/=i;
				}
				ans[i]=sum;
				min_val=min(min_val, sum);
			}
			cout << "Cheapest base(s) for number " << Y << ":";
			for(int i=2; i<=36; i++){
				if(ans[i]==min_val){cout << " " << i;}
			}
			cout << endl;
		}
	}
	return 0;
}
