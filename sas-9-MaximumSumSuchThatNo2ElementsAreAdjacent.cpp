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


int dp[10001];
int solve(int i,int a[]){
    if(i<=-1){
        return 0;
    }
    if(dp[i]!=-1) return dp[i];
    int op1=a[i]+solve(i-2,a);
    int op2=solve(a[i-1],a);
    return dp[i]=max(op1,op2); 

}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        dp[n];
        memset(dp,-1,sizeof(dp));
        int a[n];
        REP_(i,n) cin>>a[i];
        cout<<solve(n-1,a)<<endl;

    }
    
    return 0;
}
