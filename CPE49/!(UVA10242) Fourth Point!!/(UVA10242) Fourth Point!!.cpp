#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){
	vector<float> x(4);
	vector<float> y(4);
	while(cin >> x[0] >> y[0]){
		float sx=x[0], sy=y[0];
		for(int i=1; i<x.size(); i++){cin >> x[i] >> y[i]; sx+=x[i]; sy+=y[i];}
		
		for(int i=0; i<x.size(); i++){
			for(int j=i+1; j<x.size(); j++){
				if(x[i]==x[j] and y[i]==y[j]){
					cout << fixed << setprecision(3);
					cout << sx-3*x[i] << " " << sy-3*y[i] << endl; // -> ¤½¦¡ 
					break;
				}
			}
		}
	}
	return 0;
}
