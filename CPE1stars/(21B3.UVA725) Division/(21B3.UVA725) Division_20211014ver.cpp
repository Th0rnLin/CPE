# include <iostream>
# include <vector>

using namespace std;

int main(){
    int N;
    while(cin >> N){
        if(N==0){break;}
        bool is_print=false;
		for(int i=43210; i<=98765; i++){
            vector<int> v(10, 0);
            bool is_ans=true;
            
			int a=i, b, tmp;
			if(i%N==0){b=i/N;} else{continue;}
            tmp=a; while(tmp){v[tmp%10]++;tmp/=10;}
            tmp=b; while(tmp){v[tmp%10]++; tmp/=10;}
            for(int i=1; i<v.size(); i++){if(v[i]!=1){is_ans=false;}}
			if(is_ans and b<9999){cout << a << "/ 0" << b << endl; is_print=true;}
        	else if(is_ans){cout << a << "/ 0" << b << endl; is_print=true;}
        }
        if(not is_print){cout << "There are no solutions for " << N << ".";}
    }
    return 0;
}
