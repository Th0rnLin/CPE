#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int m, n; // m-> the length of vector, n-> divisor

/*bool cmp(int a, int b){
	if(a%n!=b%n){return a%n<b%n;}
	else{
		if(abs(a%2)==1 and abs(b%2)==1){return a>b;}
		else if(a%2==0 and b%2==0){return b>a;}
		else{return a%2;}
	}
}*/

bool cmp(int a, int b){
	if(a%n!=b%n){return a%n<b%n;} //-> 比較大小 
	else{
		if(abs(a%2)!=abs(b%2)){return a%2;} //-> 比較奇數偶數 -> if(abs(a%2) != abs(b%2)){return abs(a%2)>abs(b%2);} -> use this can easy understand 
		else{
			if(abs(a%2)==1 and abs(b%2)==1){return a>b;} //-> 大者前 
			else if(a%2==0 and b%2==0){return b>a;} //-> 小者前 
		}
	}
}

int main(){
	while(cin >> m >> n){
		cout << m << " " << n << endl;
		if(m==0 and n==0){break;}
		int input;
		vector<int> v(m);
		for(int i=0; i<m; i++){cin>>input; v[i]=input;}
		sort(v.begin(), v.end(), cmp);
		//v={1,1,2};
		for(auto x: v){cout << x << endl;}
	}
	return 0;
}
