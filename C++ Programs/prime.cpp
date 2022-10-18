#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter your no. ";
    cin>>n;
    int i,flag=0;
    for (i = 2; i<=n-1; i++)
    {
        /* code */
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    
    if(flag==0)
    {
        cout<<"prime "<<endl;
    }
    else
    {
        cout<<"Not Prime"<<endl;
    }

    return 0;
}
