#include <iostream>
#include<vector>
using namespace std;
void solve(){
    string s1,s2;
    cin>>s1>>s2;
    int flag=1;
    for(int i=0;i<s1.length();i++){
        if((s1[i]==s2[i]) || (s1[i]=='?' ||s2[i]=='?')){
            continue;
        }else{
            flag=0;
            break;

        }
    }
    if(flag==1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    while (n--)
    {
        solve();
    }
    
	
	return 0;
}