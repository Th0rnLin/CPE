#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int N;
	while(cin >> N){
		vector<int> v(N);
		for(int i=0; i<N; i++){cin >> v[i];}
		sort(v.begin(), v.end());
		int res1, res2=0, res3;
		if(N%2==1){ // �_��
			res1=v[v.size()/2]; // �������
			for(auto x: v){if(x==v[v.size()/2]){res2++;}} // ���h�ּƻP����ƬۦP
			res3=1; // ����Ʈt+1
		}
		else{ // ����
			res1=v[v.size()/2-1]; // �������(��Ƥ����p��)
			for(auto x: v){if(x==v[v.size()/2-1] or x==v[v.size()/2]){res2++;}} // ���h�ּƻP����ƬۦP
			res3=v[v.size()/2]-v[v.size()/2-1]+1; // ����Ʈt+1
		}
		cout << res1 << " " << res2 << " " << res3 << endl;
	}
	return 0;
}
