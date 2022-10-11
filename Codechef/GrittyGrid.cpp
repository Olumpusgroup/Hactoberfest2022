#include <bits/stdc++.h>
using namespace std;

signed main() {
	// your code goes here
	int T;
	int N, M, X, Y;
	cin>>T;
	for(int i=0;i<T;i++){
	    
	    cin>>N>>M>>X>>Y;
	    N += M-2+X;
	    X += Y;
	    if ((N%2==1) && (X%2==0)){
	        cout<<"NO\n";
	    }
	    else{
	        cout<<"YES\n";
	    }
	}
	return 0;
}
