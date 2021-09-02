#include <iostream>
#include <algorithm>
using namespace std;

int add[500];
int anso[500];
int main(){
	int a;
	cin >> a;
	while(a--){
		int b;
		cin >> b;
		for(int i=0;i<b;i++){
			cin>>add[i];
		} 
		sort(add,add+b);
		int mid = add[b/2];
		int ans = 0;
		for(int i=0;i<b;i++){
			ans = ans+abs(mid-add[i]);
		} 
		cout<<ans<<endl;
	}
}
