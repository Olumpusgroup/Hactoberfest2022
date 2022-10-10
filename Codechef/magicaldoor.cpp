#include<iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    int x=0,flag=0;
	    cin>>s;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='0' && flag==0){
	            x++;
	            flag=1;
	        }
	        else if(s[i]=='1' && flag==1){
	            x++;
	            flag=0;
	        }
	    }
	   cout<<x<<endl;
	    
	}
	return 0;
}