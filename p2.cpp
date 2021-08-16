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

vi  ar[10001];
int vis[10001],dist[10001];

void dfs(int node,int d)
{
    vis[node]=1;
    dist[node]=d;

    for(int child : ar[node])
    if(visted[child]==0)
    dfs(child,dist[node]+1)
}

int main()
{
    int n,q,a,b;
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
        cin>>a>>b , ar[a].pb(b) ,ar[b].pb(a);
    }
    dfs(1,0);

    cin>>q;
    int ans=-1,min_dist=INF;
    while(q--)
    {
        int girl_city;
        cin>>girl_city;
        if(dist[girl_city]<min_dist)
        min_dist=dist[girl_city],ans=girl_city;

        else
        if(dist[girl_city==min_dist] && girl_city<ans)
        ans=girl_city

    }
    cout<<ans;


}