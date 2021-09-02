#include <iostream>
using namespace std;
int len(int);
int bt(int,int);
int main(){
  int x,y,temp,maxLen;
  while(cin >> x >> y){
    cout << x<<" "<<y<<" ";
    if (x>y){
      temp=x;
      x=y;
      y=temp;
    }
    maxLen=bt(x,y);
    cout << maxLen<<endl;
  }
}
int bt(int a,int b){
  int max=0,i,j;
  for(i=a;i<=b;i++){
    j=len(i);
    if (max<j) max=j;
  }
  return max;
}
int len(int n){
  int length=1;
  while (n != 1){
    if (n%2) {
      n=3*n+1;
    }else {
      n=n/2;
    }
    length++;
  }
  return length;
}
