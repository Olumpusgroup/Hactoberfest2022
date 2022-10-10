
// fibonacci series


#include<iostream>
using namespace std;

void fab(int n);
void fab(int n)
{
    int t1=1;
    int t2=1;
    int nxt;

    for(int i=1; i<=n; i++)
    {
        cout<<t1<<endl;
        nxt=t1+t2;
        t1=t2;
        t2=nxt;
    }

    return;
}

int main()
{
    int n;
    cout<<"enter the no. of terms you want ";
    cin>>n;

    fab(n);

    return 0;
}

