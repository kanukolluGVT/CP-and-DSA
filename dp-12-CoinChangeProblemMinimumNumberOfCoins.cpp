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

int coinchange(int coin[],int n,int sum)
{
    int t[n+1][sum+1];
    memset(t,-1,sizeof(t));
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            if(i==0) t[i][j]=INT_MAX-1;
            if(j==0 and i!=0) t[i][j]=0;
            
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            if(coin[i]<j) t[i][j]=min(t[i][j-coin(i)]+1,t[i-1][j]);
            if(coin[i]>j) t[i][j]=t[i-1][j];
        }
    }
    return t[n][sum];
}

int main ()
{

    dfile();
    
    //cout<<"hello"<<endl;
    int n,sum;
    cin>>n;
    int coins[n];
    REP_(i,n) cin>>coins[i],sum+=coins[i];
    coinchange(coins,n,sum);
    



    
    return 0;
}


