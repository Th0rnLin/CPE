#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v(12, 0);
	v[0]=31, v[1]=28, v[2]=31, v[3]=30, v[4]=31, v[5]=30;
	v[6]=31, v[7]=31, v[8]=30, v[9]=31, v[10]=30, v[11]=31;

	int N;
	cin >> N;
	while(N--){
		int M, D;
		cin >> M >> D;
		for(int i=0; i<M-1; i++){D+=v[i];}
		D %= 7;
		if(D==6){cout << "Thursday" << endl;}
		else if(D==0){cout << "Friday" << endl;}
		else if(D==1){cout << "Saturday" << endl;}
		else if(D==2){cout << "Sunday" << endl;}
		else if(D==3){cout << "Monday" << endl;}
		else if(D==4){cout << "Tuesday" << endl;}
		else if(D==5){cout << "Wednesday" << endl;}
	}
	return 0;
}
