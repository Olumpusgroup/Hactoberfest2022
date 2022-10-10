// Linear Search

#include<iostream>
using namespace std;

int LinearSearch(int a[], int n, int key)
{
    for(int i=0;i<n; i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }

    return -1;
}



int main()
{
    int n;
    cout<<"enter size of array ";
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int key;
    cout<<"enter the no. you want to search ";
    cin>>key;
    cout<<LinearSearch(a,n,key)<<endl;

    return 0;
}