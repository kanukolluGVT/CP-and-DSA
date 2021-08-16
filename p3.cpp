#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
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

vi ar[10001];
int vis[10001];

void dfs(int node)
{
    vis[node]=1;
    for(int child : ar[node])
    if(vis[child==0])
    dfs(child);

}
int main()
{
    int n,m,a,b;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        ar[a].pb(b),ar[b].pb(a);

    }
    int cc_count=0;
    for(int i=1;i<=n;i++)
    if(vis[i]==0)
    dfs(i) , cc_count++;

    if(cc_count==1 && m==n-1)
    cout<<"Yes";
    else
    cout<<"No";

    return 0;

}