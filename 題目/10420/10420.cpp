#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int n;
    char a[76];
    string b[2001];
    
       scanf("%d",&n);
    for(int i=0;i<n;i++){
        gets(a);
        cin>>b[i];
    }

    sort(b,b+n);

    for(int i=0;i<n;){
        cout<<b[i]<<' ';
        int num=1,j;
        for(j=i+1;j<n;j++){
            if(b[i]!=b[j]) break;
            num++;
        }
        printf("%d\n",num);
        i=j;
    }
    return 0;
}
