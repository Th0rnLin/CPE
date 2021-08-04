#include <iostream>
#include <map>

using namespace std;
map<char, char> m;


bool is_palindrome(string s){
	int len=s.length();
	if(len%2){ // odd
		int l=len/2-1, r=len/2+1;
		while(r+1<len and l-1>=0 and s[r+1]==s[l-1]){r++; l--;}
		if(r-l+1==len){return true;}
		else{return false;}
	}else{ // even
		int r=len/2, l=r-1;
		while(r+1<len and l-1>=0 and s[r+1]==s[l-1]){r++; l--;}
		if(r-l+1==len){return true;}
		else{return false;}
	}
}

bool is_mirrored(string s){
	int len=s.length();
	for(int i=0; i<len/2; i++){
		if(m.count(s[i])){s[i]=m[s[i]];}
	}
	return is_palindrome(s);
}

int main(){
	m['A']='A', m['E']='3', m['H']='H', m['I']='I', m['J']='L', m['L']='J';
	m['M']='M', m['O']='O', m['S']='2', m['T']='T', m['U']='U', m['V']='V', m['W']='W', m['X']='X';
	m['Y']='Y', m['Z']='5', m['1']='1', m['2']='S', m['3']='E', m['5']='Z', m['8']='8';
	
	string s;
	while(cin >> s){
		bool A=is_palindrome(s), B=is_mirrored(s);
		if(A==true and B==true){cout << s << " -- is a mirrored palindrome." << endl;}
		else if(A==true and B==false){cout << s << " -- is a regular palindrome." << endl;}
		else if(A==false and B==true){cout << s << " -- is a mirrored string." << endl;}
		else{cout << s << " -- is not a palindrome." << endl;}
		cout << endl;
	}
	return 0;
}
