#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector <ll>
#define random(l,r,T) uniform_int_distribution<T>(l,r)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());


// *     Test case generator     **
void test(string path,int i)
{
    freopen(path.c_str(), "w", stdout); // stdout <- file stream
    // cout <- object that writes in stdout
    // if we link stdout to the target file, cout can write in that file,
    // input file generate
    if(i == 0)
    {
        cout << "6" << endl;
        cout << "1 2" << endl;
    }
    else if(i<3){
            int x = random(1,100,int);
            assert(x>=1 && x<=1e7);
            cout<<x<<endl;
            int a=random(1,200,int);
              int b=random(1,200,int);
             int c=random(1,200,int);
            assert(a>=1 && a<=1e7);
            assert(b>=1 && b<=1e7);
            assert(c>=1 && c<=1e7);
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    
    else if(i<5){
         int x = random(100,10000,int);
            assert(x>=1 && x<=1e7);
            cout<<x<<endl;
            int a=random(100,20000,int);               
              int b=random(100,20000,int);
             int c=random(100,20000,int);
            assert(a>=1 && a<=1e7);
            assert(b>=1 && b<=1e7);
            assert(c>=1 && c<=1e7);
            cout<<a<<" "<<b<<" "<<c<<endl;    cout << endl;
        }
    
    else if(i<8){
        int x = random(10000,100000,int);
            assert(x>=1 && x<=1e7);
            cout<<x<<endl;
            int a=random(10000,200000,int);
              int b=random(10000,200000,int);
             int c=random(10000,20000,int);
            assert(a>=1 && a<=1e7);
            assert(b>=1 && b<=1e7);
            assert(c>=1 && c<=1e7);
            cout<<a<<" "<<b<<" "<<c<<endl; }
    
    else {
       
             int x = random(100000,10000000,int);
            assert(x>=1 && x<=1e7);
            cout<<x<<endl;
            int a=random(100000,10000000,int);
              int b=random(100000,1000000,int);
             int c=random(100000,10000000,int);
            assert(a>=1 && a<=1e7);
            assert(b>=1 && b<=1e7);
            assert(c>=1 && c<=1e7);
            cout<<a<<" "<<b<<" "<<c<<endl;
    }
    
}

// *     CODE     **
void solve(string ipath,string opath)
{
    freopen(ipath.c_str(), "r", stdin);
    freopen(opath.c_str(), "w", stdout);
    // solution starts here
    
    int ans=0;
    int x,a,b,c;
    cin>>x>>a>>b>>c;
    if((a+b+c)<=x)
    ans=3;
    else if((a+b)<=x ||(a+c)<=x||(b+c)<=x)
    ans=2;
    else if(a<=x||b<=x||c<=x)
    ans=1;
    else
    ans=0;
    cout<<ans<<endl;
}

int main()
{
    int p = 10;
    for(int i=0;i<p;i++)
    {
        string path = to_string(i);
        if(i < 10) path = "0" + path; // "01" "02" "10"
        string ipath = "RECode 29.0/testRECode/Divide the String/input/input" + path + ".txt"; 
        test(ipath,i);
        string opath = "RECode 29.0/testRECode/Divide the String/output/output" + path + ".txt";
        solve(ipath,opath);
    }
}