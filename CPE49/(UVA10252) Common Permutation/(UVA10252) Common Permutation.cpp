#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// use two pointer to solve its
int main(){
	string a, b;
	while(cin >> a and cin >> b){
		vector<char> v;
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		int A=0, B=0;
		while(A<a.size() and B<b.size()){
			if(a[A]>b[B]){B++;}
			else if(b[B]>a[A]){A++;}
			else{
				v.push_back(a[A]);
				A++;B++;
			}
		}
		for(auto x: v){cout << x;}
		cout << endl;
	}
	return 0;
}
