#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	int n,i,j;
	cin>>n>>ws;
	int ans[100]={0};
	while(n--)
	{
		getline(cin,s);
		for(i=0;i<s.size();i++)
		{ 
			ans[int(toupper(s[i]))]++; // ascii 65 ~ 91 => A ~ Z
		} 
		for(i=100;i>0;i--)
		{
			for(j=65;j<=91;j++) // ascii 65 ~ 91 => A ~ Z
			{
				if(ans[j]==i)cout<<char(j)<<" "<<i<<endl; // max value to print
			}
		}
	}
}

/*#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	int n,i,j;cin>>n>>ws;
	int ans[100][2]={0};
	while(n--)
	{
		getline(cin,s);
		for(i=0;i<s.size();i++)
		{ 
			ans[int(toupper(s[i]))][0]++;
		} 
		for(i=100;i>0;i--)for(j=65;j<=91;j++)
		{
			if(ans[j][0]==i)cout<<char(j)<<" "<<i<<endl;
		}
	}
}*/ 
