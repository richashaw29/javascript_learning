#include <iostream>
using namespace std;
int main()
{ int n, c=1;
cout<<"enter the number";
cin>>n;
for(int i =1;i<=n;i++)
{
for(int j=1;j<=n;j++)
{
if(i>=j)
cout<<"*";
else
cout<<" ";
if(j==n)
{
for(int l=n+1;l>=1;l--)
{
if(i>=l)
cout<<"*";
else
cout<<" "; 
}
}
}
cout<<endl;
}



for(int i =n;i>=1;i--)
{
for(int j=1;j<=n;j++)
{
if(i>=j)
cout<<"*";
else
cout<<" ";
if(j==n)
{
for(int l=n+1;l>=1;l--)
{
if(i>=l)
cout<<"*";
else
cout<<" "; 
}
}
}
cout<<endl;
}
return 0;
}