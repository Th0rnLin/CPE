#include <iostream>
#include <vector>

using namespace std;

vector<int> v={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
	int N;
	cin >> N;
	while(N--){
		int m, d;
		cin >> m >> d;
		while(m--){d+=v[m];}
		d = (d+5)%7;
		
		if(d==0){cout << "Sunday" << endl;}
		else if(d==1){cout << "Monday" << endl;}
		else if(d==2){cout << "Tuesday" << endl;}
		else if(d==3){cout << "Wensday" << endl;}
		else if(d==4){cout << "Thursday" << endl;}
		else if(d==5){cout << "Friday" << endl;}
		else if(d==6){cout << "Saturday" << endl;}
	}
	return 0;
}
