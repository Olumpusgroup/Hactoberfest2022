#include<iostream.h>
#include<conio.h>
using namespace std;
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,k,m,n,p,q;
cout<<"Enter the order of matrix A:";
cin>>m>>n;
cout<<"Enter the order of matrix B:";
cin>>p>>q;

if(n!=p)
{
cout<<"Multiplication is not possible";
}
else
{
cout<<"Enter the elements of matrix A:";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>a[i][j];
}
}
cout<<"Enter the elements of matrix B:";
for(i=0;i<p;i++)
{

for(j=0;j<q;j++)
{
cin>>b[i][j];
}
}
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
cout<<"The product of the matrices is:";
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
cout<<c[i][j]<<";
";
}
}
}
return 0;
}
