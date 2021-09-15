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

int solve(int h,int a,int i)
{
    if(h<=0 or a<=0)
    {
        return 0;
    }
    if(dp[h][a]!=-1)
    {
        return dp[h][a];
    }
    int x,y,z;
    x=y=z=0;
    if(i!=1) x=1+solve(h+3,a+2,1);
    if(i!=2) y=1+solve(h-5,a-10,2);
    if(i!=3) z=1+solve(h-2=,a+5,3);
    return dp[h][a]=max({x,y,z});
}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    int dp[1001][1001];
    w(t)
    {
        int health,armor;
        cin>>health>>armor;
        memset(dp,-1,sizeof(dp));
        cout<<max({solve(health+3,armor+2,1),solve(health-5,armor-10,2),solve(health-20,armmor+5,3)})<<endl;


    }


    return 0;
}
