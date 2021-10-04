#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define REP_(i,n) for (int i=0;i<=n;i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>6
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
#define w(x) int x;cin>>x; while(x--)
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
 
using namespace std;

void dfile()
{
#ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
 
#endif
}

int lcs(string x,string y,int n,int m)
{
    if(n==0||m==0)
    {
        return 0;
    }
    if(x[n-1]==y[m-1]) return 1+lcs(x,y,n-1,m-1);
    else return max(lcs(x,y,n,m-1),lcs(x,y,n-1,m));
}

int main ()
{

    dfile();
    
    //cout<<"hello"<<endl;
    string x;
    string y;
    cin>>x;
    cin>>y;
    cout<<lcs(x,y,x.size(),y.size());
    
    



    
    return 0;
}


