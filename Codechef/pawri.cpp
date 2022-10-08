#include <iostream>
#include<vector>
using namespace std;
void solve(){
    string s1;
    cin>>s1;
    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i]=='p'){
            if(s1[i+1]=='a'){
                if(s1[i+2]=='r'){
                    if(s1[i+3]=='t'){
                        if(s1[i+4]=='y'){
                            s1.replace(i,5,"pawri");  
                        }

                    }else{
                        continue;
                    }

                }else{
                    continue;
                }

            }
            else{
                continue;
            }
        }
    }
    cout<<s1;
    

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
