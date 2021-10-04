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


int t[11][11];

int lcs(string a,string b,int m,int n)
{
    for(int i=0;i<m+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i==0 && j==0) t[i][j]=0;
            if(i==0||j==0) t[i][j]=0;
            if(a[i-1]==b[j-1] && i!=j) t[i][j]=1+t[i-1][j-1];
            else t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
    return t[m-1][n-1];
}

int main ()
{

    dfile();
    
    //cout<<"hello"<<endl;
    memset(t,0,sizeof(t));
    string s;
    cin>>s;
    int m=s.size();
    int n=s.size();
    cout<<lcs(s,s,m,n);

   



    
    return 0;
}


