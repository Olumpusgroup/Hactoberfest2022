#include<iostream>
using namespace std;

int  max(int x,int y,int z)
{

    if (x>y)
    {
        if(x>z)
        return x;

        else
        return z;
    }
    else
    {
        if(y>z)
        return y;

        else
        return z;
    }
    
}


bool pytha(int x,int y,int z)
{

    int a,b,c;
    a=max(x,y,z);

    if(x==a) 
    {
        b=y;
        c=z;
    }
    else if(y==a)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }


    
    if( a*a==b*b + c*c)
    {

        return true;
    }

    else
    return false;
}



int main()
{
    int x,y,z;

    cout<<"enter the sides ";
    cin>>x>>y>>z;

    if(pytha(x,y,z))
    {
        cout<<"pthagorian triangle ";
    }

    else
    cout<<"not pythagorian triangle";

    return 0;
}