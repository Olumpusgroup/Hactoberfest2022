#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	int N;
	string A,B;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>N;
	    cin>>A;
	    cin>>B;
	    int X[26] = {0};
	    int cnt = 0;
	    for(int j=0;j<N;j++){
	        if(A[j]!=B[j]){
	            int l = B[j] - 'a';
	            X[l]= B[j];
	        }
	    }
	    for(int j=0;j<26;j++){
	        if(X[j]!=0){
	            cnt+=1;
	        }
	    }
	    
	    cout<<cnt<<endl;
	}
	
	return 0;
}
