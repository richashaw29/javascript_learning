#include <iostream>
using namespace std;
int main ()
{
    int n,c=1,i,j;
    cin>>n;

    for(i=n;i>=1;i--)
    {
        for(j=1;j<i;j++)
        { 
        cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++)
        {
             cout<<j;
        }
         for(j=1;j<i;j++)
        { 
        cout<<" ";
        }
        cout<<endl;
    }
}