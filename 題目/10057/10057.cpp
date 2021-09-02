#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int i,t,n;
	
	while(cin>>n)//輸入測資 
	{
		int num[n]={0},ans1,ans2=0,ans3;
		for(i=0;i<n;i++)//輸入測資
		{
			cin>>num[i]; 
		}
		
		sort(num,num+n);//排列 
		
		for(i=0;i<n;i++)
		{
			if(n%2)//有奇數個數字 
			{
				ans1=num[(n-1)/2];//找到中位數 
				ans3=1;//只有一個數符合公式 
				if(num[(n-1)/2]==num[i])//算輸入跟中位數一樣的有幾個 
				{
					ans2++;
				}
			}
			
			else//有偶數個數字 
			{
				ans1=num[n/2-1];//找到中間兩項較小的數 
				ans3=num[n/2]-num[n/2-1]+1;//找出符合公式的有幾個數 
				if(num[n/2-1]==num[i])//算輸入跟中間兩項一樣的有幾個
				{
					ans2++;
				}
				else if(num[n/2]==num[i])
				{
					ans2++;
				}
			}
		}
		
		cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;//輸出 
	}
    return 0;
}
