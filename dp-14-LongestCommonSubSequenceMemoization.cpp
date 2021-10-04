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

int t[10001][10001];

int lcs(string x,string y,int m,int n)
{
    if(n==0||m==0)
    {
        return 0;
    }
    if(t[m][n]!=-1)
    {
        return t[m][n];
    }
    if(x[m-1]==y[n-1])
    {
        return t[m][n]=1+lcs(x,y,m-1,n-1);
    }
    if(x[m-1]!=y[n-1])
    {
        return t[m][n]=max(lcs(x,y,m,n-1),lcs(x,y,m-1,n));
    }


}

int main ()
{

    dfile();
    string x,y;
    cin>>x>>y;
    int m=x.length();
    int n=y.length();
    memset(t,-1,sizeof(t));
    cout<<lcs(x,y,m,n);
    
    //cout<<"hello"<<endl;
    return 0;
}


