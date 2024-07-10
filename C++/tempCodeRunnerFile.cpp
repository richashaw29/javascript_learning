#include <iostream>
using namespace std;
int main ()
{
    int n,c=1,i,j;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        { if(i%2==0&&j%2!=0)||(i%2!=0&&j%2==0)
        cout<<"0";
        else
        cout<<"1";
            c++;
        }
        cout<<endl;
    }
}