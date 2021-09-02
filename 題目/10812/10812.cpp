#include <iostream>
using namespace std;

int main()
{
	int t,a,b,s,d;
	cin>>t;//輸入測資數量 
	while(t--)
	{
		cin>>s>>d;//輸入兩隊分數的和與差 
		
		a=(s+d)/2;//解聯立得出兩隊分數 
		b=(s-d)/2;
		
		if((a+b==s&&a-b==d)&&b>=0)//驗算與判斷b是否為正數並且輸出 
		{						  //只檢查b是因為差為絕對值所以a一定會比較大 
			cout<<a<<" "<<b<<endl;
		}
		else
		{
			cout<<"impossible"<<endl;
		}
	}
	
}
 
