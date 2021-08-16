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
int maxD, maxNode;
void dfs(int node,int d)
{
    vis[node]=1;
    if(d>maxD) maxD=d , maxNode=node;
    for(int child : ar[node])
    if(vis[child]==0)
    dfs(child,d+1);

}

int main()
{
    int n,a,b;
    cin>>n;
    REP(1,n-1) cin>>a>>b , ar[a].pb(b) , ar[b].pb(a);
    maxD=-1;
    dfs(1,0);
    REP(1,n) vis[i]=0 ;
    maxD=-1;
    dfs(maxNode,0);
    cout<<maxD;
}