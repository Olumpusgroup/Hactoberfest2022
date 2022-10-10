//palindrome patter
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {

        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }

        for(int k=i; k>=1; k-- )
        {
            cout<<k;
        }

        for(int p=2; p<=i; p++)
        {
            cout<<p;
        }

        cout<<endl;
 
    }

    return 0;
}