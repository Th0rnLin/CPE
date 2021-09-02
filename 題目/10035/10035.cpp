#include <iostream>
#include <algorithm> 
using namespace std;

int main(){
	long int a,b;
	
	while(cin >> a){
		int count = 0;
		int carry = 0;
		cin >> b;
		if(a==0&&b==0){return 0;}
		while(a>0||b>0){
			if((a%10+b%10+carry)>9){
				count++;
				carry=1;
			}
			else{
				carry = 0;
			}
			a/=10;
			b/=10;
		}
		if(count == 0){
			cout<<"No carry operation."<<endl;
		}
		else if(count == 1){
			cout<<"1 carry operation."<<endl;
		}
		else{
			cout<<count<<" carry operations."<<endl;
		}
	}
}
