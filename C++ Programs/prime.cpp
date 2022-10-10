#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter your no. ";
    cin>>n;
    int i;
    for (i = 2; i<=n-1; i++)
    {
        /* code */
        if(n%i==0)
        {
            cout<<"not prime "<<endl;
            break;
        }
    }
    
    if(i == n)
    {
        cout<<"prime "<<endl;
    }

    return 0;
}